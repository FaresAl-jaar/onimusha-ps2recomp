#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00201AE0
// Address: 0x201ae0 - 0x201c94
void sub_00201AE0_0x201ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201AE0_0x201ae0");
#endif

    switch (ctx->pc) {
        case 0x201b24u: goto label_201b24;
        case 0x201b58u: goto label_201b58;
        case 0x201bb8u: goto label_201bb8;
        case 0x201c18u: goto label_201c18;
        default: break;
    }

    ctx->pc = 0x201ae0u;

    // 0x201ae0: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x201ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x201ae4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x201ae4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x201ae8: 0x8c4385a0  lw          $v1, -0x7A60($v0)
    ctx->pc = 0x201ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4B85A0u));
    // 0x201aec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x201aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x201af0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x201af0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201af4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x201af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x201af8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x201af8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201afc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x201afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x201b00: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x201b00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201b04: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x201b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x201b08: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x201b08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201b0c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x201b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x201b10: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x201b10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201b14: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x201B14u;
    {
        const bool branch_taken_0x201b14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x201B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201B14u;
        // 0x201b18: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201b14) {
            ctx->pc = 0x201B24u;
            goto label_201b24;
        }
    }
    ctx->pc = 0x201B1Cu;
    // 0x201b1c: 0xc0806a8  jal         func_201AA0
    ctx->pc = 0x201B1Cu;
    SET_GPR_U32(ctx, 31, 0x201B24u);
    ctx->pc = 0x201AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201AA0u, 0x201B1Cu, 0x201B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201B24u;
label_201b24:
    // 0x201b24: 0xa6400000  sh          $zero, 0x0($s2)
    ctx->pc = 0x201b24u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x201b28: 0xa6600000  sh          $zero, 0x0($s3)
    ctx->pc = 0x201b28u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x201b2c: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x201B2Cu;
    {
        const bool branch_taken_0x201b2c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x201B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201B2Cu;
        // 0x201b30: 0xa6800000  sh          $zero, 0x0($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201b2c) {
            ctx->pc = 0x201B3Cu;
            goto label_201b3c;
        }
    }
    ctx->pc = 0x201B34u;
    // 0x201b34: 0x1a00004f  blez        $s0, . + 4 + (0x4F << 2)
    ctx->pc = 0x201B34u;
    {
        const bool branch_taken_0x201b34 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x201B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201B34u;
        // 0x201b38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201b34) {
            ctx->pc = 0x201C74u;
            goto label_201c74;
        }
    }
    ctx->pc = 0x201B3Cu;
label_201b3c:
    // 0x201b3c: 0x3c0b0067  lui         $t3, 0x67
    ctx->pc = 0x201b3cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)103 << 16));
    // 0x201b40: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x201b40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201b44: 0x256299b8  addiu       $v0, $t3, -0x6648
    ctx->pc = 0x201b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 4294941112));
    // 0x201b48: 0x1a000018  blez        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x201B48u;
    {
        const bool branch_taken_0x201b48 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x201B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201B48u;
        // 0x201b4c: 0x844a0200  lh          $t2, 0x200($v0) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201b48) {
            ctx->pc = 0x201BACu;
            goto label_201bac;
        }
    }
    ctx->pc = 0x201B50u;
    // 0x201b50: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x201b50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201b54: 0x0  nop
    ctx->pc = 0x201b54u;
    // NOP
label_201b58:
    // 0x201b58: 0x2271821  addu        $v1, $s1, $a3
    ctx->pc = 0x201b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x201b5c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x201b5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x201b60: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x201b60u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x201b64: 0xf0302a  slt         $a2, $a3, $s0
    ctx->pc = 0x201b64u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x201b68: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x201b68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x201b6c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x201b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x201b70: 0x84430100  lh          $v1, 0x100($v0)
    ctx->pc = 0x201b70u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x201b74: 0x1431818  mult        $v1, $t2, $v1
    ctx->pc = 0x201b74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x201b78: 0x246503ff  addiu       $a1, $v1, 0x3FF
    ctx->pc = 0x201b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1023));
    // 0x201b7c: 0x28640000  slti        $a0, $v1, 0x0
    ctx->pc = 0x201b7cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x201b80: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x201b80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201b84: 0xa4100b  movn        $v0, $a1, $a0
    ctx->pc = 0x201b84u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x201b88: 0x21283  sra         $v0, $v0, 10
    ctx->pc = 0x201b88u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
    // 0x201b8c: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x201b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x201b90: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x201b90u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x201b94: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x201b94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x201b98: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x201b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x201b9c: 0x14c0ffee  bnez        $a2, . + 4 + (-0x12 << 2)
    ctx->pc = 0x201B9Cu;
    {
        const bool branch_taken_0x201b9c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x201BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201B9Cu;
        // 0x201ba0: 0x846a0000  lh          $t2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201b9c) {
            ctx->pc = 0x201B58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201b58;
        }
    }
    ctx->pc = 0x201BA4u;
    // 0x201ba4: 0x256299b8  addiu       $v0, $t3, -0x6648
    ctx->pc = 0x201ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 4294941112));
    // 0x201ba8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x201ba8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_201bac:
    // 0x201bac: 0x1a000015  blez        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x201BACu;
    {
        const bool branch_taken_0x201bac = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x201BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201BACu;
        // 0x201bb0: 0x84480400  lh          $t0, 0x400($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1024)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201bac) {
            ctx->pc = 0x201C04u;
            goto label_201c04;
        }
    }
    ctx->pc = 0x201BB4u;
    // 0x201bb4: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x201bb4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_201bb8:
    // 0x201bb8: 0x2271821  addu        $v1, $s1, $a3
    ctx->pc = 0x201bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x201bbc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x201bbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x201bc0: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x201bc0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x201bc4: 0xf0302a  slt         $a2, $a3, $s0
    ctx->pc = 0x201bc4u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x201bc8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x201bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x201bcc: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x201bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x201bd0: 0x84430100  lh          $v1, 0x100($v0)
    ctx->pc = 0x201bd0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x201bd4: 0x1031818  mult        $v1, $t0, $v1
    ctx->pc = 0x201bd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x201bd8: 0x246503ff  addiu       $a1, $v1, 0x3FF
    ctx->pc = 0x201bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1023));
    // 0x201bdc: 0x28640000  slti        $a0, $v1, 0x0
    ctx->pc = 0x201bdcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x201be0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x201be0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201be4: 0xa4100b  movn        $v0, $a1, $a0
    ctx->pc = 0x201be4u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x201be8: 0x21283  sra         $v0, $v0, 10
    ctx->pc = 0x201be8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
    // 0x201bec: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x201becu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x201bf0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x201bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x201bf4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x201bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x201bf8: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x201bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x201bfc: 0x14c0ffee  bnez        $a2, . + 4 + (-0x12 << 2)
    ctx->pc = 0x201BFCu;
    {
        const bool branch_taken_0x201bfc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x201C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201BFCu;
        // 0x201c00: 0x84680000  lh          $t0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201bfc) {
            ctx->pc = 0x201BB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201bb8;
        }
    }
    ctx->pc = 0x201C04u;
label_201c04:
    // 0x201c04: 0x256299b8  addiu       $v0, $t3, -0x6648
    ctx->pc = 0x201c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 4294941112));
    // 0x201c08: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x201c08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201c0c: 0x1a000015  blez        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x201C0Cu;
    {
        const bool branch_taken_0x201c0c = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x201C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201C0Cu;
        // 0x201c10: 0x84440600  lh          $a0, 0x600($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201c0c) {
            ctx->pc = 0x201C64u;
            goto label_201c64;
        }
    }
    ctx->pc = 0x201C14u;
    // 0x201c14: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x201c14u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_201c18:
    // 0x201c18: 0x2271821  addu        $v1, $s1, $a3
    ctx->pc = 0x201c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x201c1c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x201c1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x201c20: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x201c20u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x201c24: 0xf0302a  slt         $a2, $a3, $s0
    ctx->pc = 0x201c24u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x201c28: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x201c28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x201c2c: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x201c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x201c30: 0x84430100  lh          $v1, 0x100($v0)
    ctx->pc = 0x201c30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x201c34: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x201c34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x201c38: 0x28640000  slti        $a0, $v1, 0x0
    ctx->pc = 0x201c38u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x201c3c: 0x246503ff  addiu       $a1, $v1, 0x3FF
    ctx->pc = 0x201c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1023));
    // 0x201c40: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x201c40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201c44: 0xa4100b  movn        $v0, $a1, $a0
    ctx->pc = 0x201c44u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x201c48: 0x21283  sra         $v0, $v0, 10
    ctx->pc = 0x201c48u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
    // 0x201c4c: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x201c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x201c50: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x201c50u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x201c54: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x201c54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x201c58: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x201c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x201c5c: 0x14c0ffee  bnez        $a2, . + 4 + (-0x12 << 2)
    ctx->pc = 0x201C5Cu;
    {
        const bool branch_taken_0x201c5c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x201C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201C5Cu;
        // 0x201c60: 0x84640000  lh          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201c5c) {
            ctx->pc = 0x201C18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201c18;
        }
    }
    ctx->pc = 0x201C64u;
label_201c64:
    // 0x201c64: 0xa64a0000  sh          $t2, 0x0($s2)
    ctx->pc = 0x201c64u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x201c68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x201c68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201c6c: 0xa6680000  sh          $t0, 0x0($s3)
    ctx->pc = 0x201c6cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x201c70: 0xa6840000  sh          $a0, 0x0($s4)
    ctx->pc = 0x201c70u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 4));
label_201c74:
    // 0x201c74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x201c74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201c78: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x201c78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x201c7c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x201c7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x201c80: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x201c80u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x201c84: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x201c84u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x201c88: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x201c88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x201c8c: 0x3e00008  jr          $ra
    ctx->pc = 0x201C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201C8Cu;
        // 0x201c90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201C8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201C94u;
}
