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

// Function: sub_00131B90
// Address: 0x131b90 - 0x131c98
void sub_00131B90_0x131b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131B90_0x131b90");
#endif

    switch (ctx->pc) {
        case 0x131bf8u: goto label_131bf8;
        case 0x131c38u: goto label_131c38;
        default: break;
    }

    ctx->pc = 0x131b90u;

    // 0x131b90: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x131b90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x131b94: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x131b94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x131b98: 0x8c24ceb8  lw          $a0, -0x3148($at)
    ctx->pc = 0x131b98u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x131b9c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x131b9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x131ba0: 0x1460003b  bnez        $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x131BA0u;
    {
        const bool branch_taken_0x131ba0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x131BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131BA0u;
        // 0x131ba4: 0x30c400ff  andi        $a0, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x131ba0) {
            ctx->pc = 0x131C90u;
            goto label_131c90;
        }
    }
    ctx->pc = 0x131BA8u;
    // 0x131ba8: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x131ba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x131bac: 0x43200  sll         $a2, $a0, 8
    ctx->pc = 0x131bacu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x131bb0: 0x3107ffff  andi        $a3, $t0, 0xFFFF
    ctx->pc = 0x131bb0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x131bb4: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x131bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x131bb8: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x131bb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x131bbc: 0x10e0000a  beqz        $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x131BBCu;
    {
        const bool branch_taken_0x131bbc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x131BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131BBCu;
        // 0x131bc0: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x131bbc) {
            ctx->pc = 0x131BE8u;
            goto label_131be8;
        }
    }
    ctx->pc = 0x131BC4u;
    // 0x131bc4: 0x3086ffff  andi        $a2, $a0, 0xFFFF
    ctx->pc = 0x131bc4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x131bc8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x131bc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x131bcc: 0xc42023  subu        $a0, $a2, $a0
    ctx->pc = 0x131bccu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x131bd0: 0x87001a  div         $zero, $a0, $a3
    ctx->pc = 0x131bd0u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x131bd4: 0x0  nop
    ctx->pc = 0x131bd4u;
    // NOP
    // 0x131bd8: 0x0  nop
    ctx->pc = 0x131bd8u;
    // NOP
    // 0x131bdc: 0x2012  mflo        $a0
    ctx->pc = 0x131bdcu;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x131be0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x131BE0u;
    {
        const bool branch_taken_0x131be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131BE0u;
        // 0x131be4: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x131be0) {
            ctx->pc = 0x131BECu;
            goto label_131bec;
        }
    }
    ctx->pc = 0x131BE8u;
label_131be8:
    // 0x131be8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x131be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_131bec:
    // 0x131bec: 0x308cffff  andi        $t4, $a0, 0xFFFF
    ctx->pc = 0x131becu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x131bf0: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x131bf0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131bf4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x131bf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_131bf8:
    // 0x131bf8: 0x90e40000  lbu         $a0, 0x0($a3)
    ctx->pc = 0x131bf8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x131bfc: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x131BFCu;
    {
        const bool branch_taken_0x131bfc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x131C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131BFCu;
        // 0x131c00: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131bfc) {
            ctx->pc = 0x131C18u;
            goto label_131c18;
        }
    }
    ctx->pc = 0x131C04u;
    // 0x131c04: 0xa0e40000  sb          $a0, 0x0($a3)
    ctx->pc = 0x131c04u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x131c08: 0xa4e30002  sh          $v1, 0x2($a3)
    ctx->pc = 0x131c08u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x131c0c: 0xa4e80006  sh          $t0, 0x6($a3)
    ctx->pc = 0x131c0cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 6), (uint16_t)GPR_U32(ctx, 8));
    // 0x131c10: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x131C10u;
    {
        const bool branch_taken_0x131c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131C10u;
        // 0x131c14: 0xa4ec0004  sh          $t4, 0x4($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 4), (uint16_t)GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131c10) {
            ctx->pc = 0x131C90u;
            goto label_131c90;
        }
    }
    ctx->pc = 0x131C18u;
label_131c18:
    // 0x131c18: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x131c18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x131c1c: 0x28c40008  slti        $a0, $a2, 0x8
    ctx->pc = 0x131c1cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x131c20: 0x1480fff5  bnez        $a0, . + 4 + (-0xB << 2)
    ctx->pc = 0x131C20u;
    {
        const bool branch_taken_0x131c20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x131C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131C20u;
        // 0x131c24: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131c20) {
            ctx->pc = 0x131BF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_131bf8;
        }
    }
    ctx->pc = 0x131C28u;
    // 0x131c28: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x131c28u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131c2c: 0x640b7fff  daddiu      $t3, $zero, 0x7FFF
    ctx->pc = 0x131c2cu;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)32767);
    // 0x131c30: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x131c30u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x131c34: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x131c34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_131c38:
    // 0x131c38: 0x95260006  lhu         $a2, 0x6($t1)
    ctx->pc = 0x131c38u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 6)));
    // 0x131c3c: 0x3164ffff  andi        $a0, $t3, 0xFFFF
    ctx->pc = 0x131c3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
    // 0x131c40: 0xc4082a  slt         $at, $a2, $a0
    ctx->pc = 0x131c40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x131c44: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x131C44u;
    {
        const bool branch_taken_0x131c44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x131c44) {
            ctx->pc = 0x131C58u;
            goto label_131c58;
        }
    }
    ctx->pc = 0x131C4Cu;
    // 0x131c4c: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x131c4cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131c50: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x131c50u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131c54: 0x0  nop
    ctx->pc = 0x131c54u;
    // NOP
label_131c58:
    // 0x131c58: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x131c58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x131c5c: 0x28e40008  slti        $a0, $a3, 0x8
    ctx->pc = 0x131c5cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x131c60: 0x1480fff5  bnez        $a0, . + 4 + (-0xB << 2)
    ctx->pc = 0x131C60u;
    {
        const bool branch_taken_0x131c60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x131C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131C60u;
        // 0x131c64: 0x25290008  addiu       $t1, $t1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131c60) {
            ctx->pc = 0x131C38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_131c38;
        }
    }
    ctx->pc = 0x131C68u;
    // 0x131c68: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x131c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x131c6c: 0x11440008  beq         $t2, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x131C6Cu;
    {
        const bool branch_taken_0x131c6c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 4));
        ctx->pc = 0x131C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131C6Cu;
        // 0x131c70: 0xa30c0  sll         $a2, $t2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131c6c) {
            ctx->pc = 0x131C90u;
            goto label_131c90;
        }
    }
    ctx->pc = 0x131C74u;
    // 0x131c74: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x131c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131c78: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x131c78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x131c7c: 0xa0a40000  sb          $a0, 0x0($a1)
    ctx->pc = 0x131c7cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x131c80: 0xa4a30002  sh          $v1, 0x2($a1)
    ctx->pc = 0x131c80u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x131c84: 0xa4a80006  sh          $t0, 0x6($a1)
    ctx->pc = 0x131c84u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 8));
    // 0x131c88: 0xa4ac0004  sh          $t4, 0x4($a1)
    ctx->pc = 0x131c88u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 12));
    // 0x131c8c: 0x0  nop
    ctx->pc = 0x131c8cu;
    // NOP
label_131c90:
    // 0x131c90: 0x3e00008  jr          $ra
    ctx->pc = 0x131C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131C90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131C98u;
}
