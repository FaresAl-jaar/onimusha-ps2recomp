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

// Function: sub_00248B08
// Address: 0x248b08 - 0x248c9c
void sub_00248B08_0x248b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248B08_0x248b08");
#endif

    switch (ctx->pc) {
        case 0x248b78u: goto label_248b78;
        case 0x248becu: goto label_248bec;
        case 0x248bf4u: goto label_248bf4;
        default: break;
    }

    ctx->pc = 0x248b08u;

    // 0x248b08: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x248b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x248b0c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x248b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x248b10: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x248b10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248b14: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x248b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x248b18: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x248b18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248b1c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x248b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x248b20: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x248b20u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248b24: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x248b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x248b28: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x248b28u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248b2c: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x248b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x248b30: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x248b30u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248b34: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x248b34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x248b38: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x248b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248b3c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x248b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x248b40: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x248b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x248b44: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x248b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x248b48: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x248b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x248b4c: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x248b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x248b50: 0x82620000  lb          $v0, 0x0($s3)
    ctx->pc = 0x248b50u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x248b54: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x248B54u;
    {
        const bool branch_taken_0x248b54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x248B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248B54u;
        // 0x248b58: 0xafa60004  sw          $a2, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248b54) {
            ctx->pc = 0x248C40u;
            goto label_248c40;
        }
    }
    ctx->pc = 0x248B5Cu;
    // 0x248b5c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x248b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x248b60: 0x1610c0  sll         $v0, $s6, 3
    ctx->pc = 0x248b60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
    // 0x248b64: 0x2414000a  addiu       $s4, $zero, 0xA
    ctx->pc = 0x248b64u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x248b68: 0x241e000d  addiu       $fp, $zero, 0xD
    ctx->pc = 0x248b68u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x248b6c: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x248b6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x248b70: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x248b70u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x248b74: 0x0  nop
    ctx->pc = 0x248b74u;
    // NOP
label_248b78:
    // 0x248b78: 0x50540004  beql        $v0, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x248B78u;
    {
        const bool branch_taken_0x248b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        if (branch_taken_0x248b78) {
            ctx->pc = 0x248B7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x248B78u;
            // 0x248b7c: 0x80a20001  lb          $v0, 0x1($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x248B8Cu;
            goto label_248b8c;
        }
    }
    ctx->pc = 0x248B80u;
    // 0x248b80: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x248B80u;
    {
        const bool branch_taken_0x248b80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x248B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248B80u;
        // 0x248b84: 0x26430001  addiu       $v1, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248b80) {
            ctx->pc = 0x248C1Cu;
            goto label_248c1c;
        }
    }
    ctx->pc = 0x248B88u;
    // 0x248b88: 0x80a20001  lb          $v0, 0x1($a1)
    ctx->pc = 0x248b88u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_248b8c:
    // 0x248b8c: 0x50540004  beql        $v0, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x248B8Cu;
    {
        const bool branch_taken_0x248b8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        if (branch_taken_0x248b8c) {
            ctx->pc = 0x248B90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x248B8Cu;
            // 0x248b90: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x248BA0u;
            goto label_248ba0;
        }
    }
    ctx->pc = 0x248B94u;
    // 0x248b94: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x248B94u;
    {
        const bool branch_taken_0x248b94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x248B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248B94u;
        // 0x248b98: 0x24a3ffff  addiu       $v1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248b94) {
            ctx->pc = 0x248BA8u;
            goto label_248ba8;
        }
    }
    ctx->pc = 0x248B9Cu;
    // 0x248b9c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x248b9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_248ba0:
    // 0x248ba0: 0x2722821  addu        $a1, $s3, $s2
    ctx->pc = 0x248ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x248ba4: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x248ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_248ba8:
    // 0x248ba8: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x248ba8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x248bac: 0x10540003  beq         $v0, $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x248BACu;
    {
        const bool branch_taken_0x248bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x248BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248BACu;
        // 0x248bb0: 0x2448823  subu        $s1, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248bac) {
            ctx->pc = 0x248BBCu;
            goto label_248bbc;
        }
    }
    ctx->pc = 0x248BB4u;
    // 0x248bb4: 0x145e0003  bne         $v0, $fp, . + 4 + (0x3 << 2)
    ctx->pc = 0x248BB4u;
    {
        const bool branch_taken_0x248bb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        ctx->pc = 0x248BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248BB4u;
        // 0x248bb8: 0x24a2fffe  addiu       $v0, $a1, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248bb4) {
            ctx->pc = 0x248BC4u;
            goto label_248bc4;
        }
    }
    ctx->pc = 0x248BBCu;
label_248bbc:
    // 0x248bbc: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x248bbcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x248bc0: 0x24a2fffe  addiu       $v0, $a1, -0x2
    ctx->pc = 0x248bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
label_248bc4:
    // 0x248bc4: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x248bc4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x248bc8: 0x50740004  beql        $v1, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x248BC8u;
    {
        const bool branch_taken_0x248bc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        if (branch_taken_0x248bc8) {
            ctx->pc = 0x248BCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x248BC8u;
            // 0x248bcc: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x248BDCu;
            goto label_248bdc;
        }
    }
    ctx->pc = 0x248BD0u;
    // 0x248bd0: 0x147e0003  bne         $v1, $fp, . + 4 + (0x3 << 2)
    ctx->pc = 0x248BD0u;
    {
        const bool branch_taken_0x248bd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 30));
        ctx->pc = 0x248BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248BD0u;
        // 0x248bd4: 0x2642821  addu        $a1, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248bd0) {
            ctx->pc = 0x248BE0u;
            goto label_248be0;
        }
    }
    ctx->pc = 0x248BD8u;
    // 0x248bd8: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x248bd8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_248bdc:
    // 0x248bdc: 0x2642821  addu        $a1, $s3, $a0
    ctx->pc = 0x248bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_248be0:
    // 0x248be0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x248be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248be4: 0xc049522  jal         func_125488
    ctx->pc = 0x248BE4u;
    SET_GPR_U32(ctx, 31, 0x248BECu);
    ctx->pc = 0x248BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248BE4u;
    // 0x248be8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x248BE4u, 0x248BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248BECu;
label_248bec:
    // 0x248bec: 0xc091fd8  jal         func_247F60
    ctx->pc = 0x248BECu;
    SET_GPR_U32(ctx, 31, 0x248BF4u);
    ctx->pc = 0x248BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248BECu;
    // 0x248bf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247F60u, 0x248BECu, 0x248BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248BF4u;
label_248bf4:
    // 0x248bf4: 0x2113021  addu        $a2, $s0, $s1
    ctx->pc = 0x248bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x248bf8: 0x80c2ffff  lb          $v0, -0x1($a2)
    ctx->pc = 0x248bf8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967295)));
    // 0x248bfc: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x248BFCu;
    {
        const bool branch_taken_0x248bfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x248bfc) {
            ctx->pc = 0x248C00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x248BFCu;
            // 0x248c00: 0xa0c00000  sb          $zero, 0x0($a2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x248C04u;
            goto label_248c04;
        }
    }
    ctx->pc = 0x248C04u;
label_248c04:
    // 0x248c04: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x248c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x248c08: 0x2f01021  addu        $v0, $s7, $s0
    ctx->pc = 0x248c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
    // 0x248c0c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x248c0cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x248c10: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x248c10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x248c14: 0x12b6000a  beq         $s5, $s6, . + 4 + (0xA << 2)
    ctx->pc = 0x248C14u;
    {
        const bool branch_taken_0x248c14 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 22));
        ctx->pc = 0x248C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248C14u;
        // 0x248c18: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248c14) {
            ctx->pc = 0x248C40u;
            goto label_248c40;
        }
    }
    ctx->pc = 0x248C1Cu;
label_248c1c:
    // 0x248c1c: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x248c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x248c20: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x248c20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x248c24: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x248C24u;
    {
        const bool branch_taken_0x248c24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x248C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248C24u;
        // 0x248c28: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248c24) {
            ctx->pc = 0x248C40u;
            goto label_248c40;
        }
    }
    ctx->pc = 0x248C2Cu;
    // 0x248c2c: 0x2631021  addu        $v0, $s3, $v1
    ctx->pc = 0x248c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x248c30: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x248c30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248c34: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x248c34u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x248c38: 0x5460ffcf  bnel        $v1, $zero, . + 4 + (-0x31 << 2)
    ctx->pc = 0x248C38u;
    {
        const bool branch_taken_0x248c38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x248c38) {
            ctx->pc = 0x248C3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x248C38u;
            // 0x248c3c: 0x80a20000  lb          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x248B78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_248b78;
        }
    }
    ctx->pc = 0x248C40u;
label_248c40:
    // 0x248c40: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x248c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x248c44: 0x24420b40  addiu       $v0, $v0, 0xB40
    ctx->pc = 0x248c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2880));
    // 0x248c48: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x248c48u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4D0B40u));
    // 0x248c4c: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x248C4Cu;
    {
        const bool branch_taken_0x248c4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x248c4c) {
            ctx->pc = 0x248C50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x248C4Cu;
            // 0x248c50: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x248C6Cu;
            goto label_248c6c;
        }
    }
    ctx->pc = 0x248C54u;
    // 0x248c54: 0xac57000c  sw          $s7, 0xC($v0)
    ctx->pc = 0x248c54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 23));
    // 0x248c58: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x248c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x248c5c: 0xac560008  sw          $s6, 0x8($v0)
    ctx->pc = 0x248c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 22));
    // 0x248c60: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x248c60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x248c64: 0xac550004  sw          $s5, 0x4($v0)
    ctx->pc = 0x248c64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 21));
    // 0x248c68: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x248c68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_248c6c:
    // 0x248c6c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x248c6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x248c70: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x248c70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x248c74: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x248c74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x248c78: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x248c78u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x248c7c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x248c7cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x248c80: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x248c80u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x248c84: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x248c84u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x248c88: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x248c88u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x248c8c: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x248c8cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x248c90: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x248c90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x248c94: 0x3e00008  jr          $ra
    ctx->pc = 0x248C94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248C94u;
        // 0x248c98: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248C94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248C9Cu;
}
