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

// Function: sub_0022EBA0
// Address: 0x22eba0 - 0x22eca4
void sub_0022EBA0_0x22eba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022EBA0_0x22eba0");
#endif

    switch (ctx->pc) {
        case 0x22ebf8u: goto label_22ebf8;
        case 0x22ec44u: goto label_22ec44;
        case 0x22ec68u: goto label_22ec68;
        default: break;
    }

    ctx->pc = 0x22eba0u;

    // 0x22eba0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x22eba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x22eba4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22eba4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22eba8: 0x82001a  div         $zero, $a0, $v0
    ctx->pc = 0x22eba8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x22ebac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22ebacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22ebb0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x22ebb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x22ebb4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x22ebb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ebb8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x22ebb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x22ebbc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x22ebbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ebc0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22ebc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x22ebc4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22ebc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ebc8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x22ebc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x22ebcc: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x22EBCCu;
    {
        const bool branch_taken_0x22ebcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ebcc) {
            ctx->pc = 0x22EBD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22EBCCu;
            // 0x22ebd0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x22EBD4u;
            goto label_22ebd4;
        }
    }
    ctx->pc = 0x22EBD4u;
label_22ebd4:
    // 0x22ebd4: 0x4012  mflo        $t0
    ctx->pc = 0x22ebd4u;
    SET_GPR_U64(ctx, 8, ctx->lo);
    // 0x22ebd8: 0x3810  mfhi        $a3
    ctx->pc = 0x22ebd8u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x22ebdc: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x22ebdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ebe0: 0xa2070000  sb          $a3, 0x0($s0)
    ctx->pc = 0x22ebe0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x22ebe4: 0x54800004  bnel        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x22EBE4u;
    {
        const bool branch_taken_0x22ebe4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ebe4) {
            ctx->pc = 0x22EBE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22EBE4u;
            // 0x22ebe8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22EBF8u;
            goto label_22ebf8;
        }
    }
    ctx->pc = 0x22EBECu;
    // 0x22ebec: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x22EBECu;
    {
        const bool branch_taken_0x22ebec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EBECu;
        // 0x22ebf0: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ebec) {
            ctx->pc = 0x22EC34u;
            goto label_22ec34;
        }
    }
    ctx->pc = 0x22EBF4u;
    // 0x22ebf4: 0x0  nop
    ctx->pc = 0x22ebf4u;
    // NOP
label_22ebf8:
    // 0x22ebf8: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x22ebf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x22ebfc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x22EBFCu;
    {
        const bool branch_taken_0x22ebfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EBFCu;
        // 0x22ec00: 0x2053021  addu        $a2, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ebfc) {
            ctx->pc = 0x22EC34u;
            goto label_22ec34;
        }
    }
    ctx->pc = 0x22EC04u;
    // 0x22ec04: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x22ec04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x22ec08: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x22ec08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x22ec0c: 0x82001a  div         $zero, $a0, $v0
    ctx->pc = 0x22ec0cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x22ec10: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x22EC10u;
    {
        const bool branch_taken_0x22ec10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ec10) {
            ctx->pc = 0x22EC14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22EC10u;
            // 0x22ec14: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x22EC18u;
            goto label_22ec18;
        }
    }
    ctx->pc = 0x22EC18u;
label_22ec18:
    // 0x22ec18: 0x4012  mflo        $t0
    ctx->pc = 0x22ec18u;
    SET_GPR_U64(ctx, 8, ctx->lo);
    // 0x22ec1c: 0x3810  mfhi        $a3
    ctx->pc = 0x22ec1cu;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x22ec20: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x22ec20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ec24: 0xa0c70000  sb          $a3, 0x0($a2)
    ctx->pc = 0x22ec24u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x22ec28: 0x5480fff3  bnel        $a0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x22EC28u;
    {
        const bool branch_taken_0x22ec28 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ec28) {
            ctx->pc = 0x22EC2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22EC28u;
            // 0x22ec2c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22EBF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22ebf8;
        }
    }
    ctx->pc = 0x22EC30u;
    // 0x22ec30: 0xa0c00000  sb          $zero, 0x0($a2)
    ctx->pc = 0x22ec30u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
label_22ec34:
    // 0x22ec34: 0x3c020088  lui         $v0, 0x88
    ctx->pc = 0x22ec34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)136 << 16));
    // 0x22ec38: 0x24515aa0  addiu       $s1, $v0, 0x5AA0
    ctx->pc = 0x22ec38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 23200));
    // 0x22ec3c: 0xc049f18  jal         func_127C60
    ctx->pc = 0x22EC3Cu;
    SET_GPR_U32(ctx, 31, 0x22EC44u);
    ctx->pc = 0x22EC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EC3Cu;
    // 0x22ec40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127C60u, 0x22EC3Cu, 0x22EC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EC44u;
label_22ec44:
    // 0x22ec44: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x22ec44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ec48: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x22ec48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x22ec4c: 0xe2182a  slt         $v1, $a3, $v0
    ctx->pc = 0x22ec4cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x22ec50: 0x43380a  movz        $a3, $v0, $v1
    ctx->pc = 0x22ec50u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
    // 0x22ec54: 0x18e0000b  blez        $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x22EC54u;
    {
        const bool branch_taken_0x22ec54 = (GPR_S64(ctx, 7) <= 0);
        ctx->pc = 0x22EC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EC54u;
        // 0x22ec58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ec54) {
            ctx->pc = 0x22EC84u;
            goto label_22ec84;
        }
    }
    ctx->pc = 0x22EC5Cu;
    // 0x22ec5c: 0xf11021  addu        $v0, $a3, $s1
    ctx->pc = 0x22ec5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
    // 0x22ec60: 0x2446ffff  addiu       $a2, $v0, -0x1
    ctx->pc = 0x22ec60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x22ec64: 0x0  nop
    ctx->pc = 0x22ec64u;
    // NOP
label_22ec68:
    // 0x22ec68: 0x2052021  addu        $a0, $s0, $a1
    ctx->pc = 0x22ec68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x22ec6c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x22ec6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x22ec70: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x22ec70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x22ec74: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x22ec74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x22ec78: 0xa7102a  slt         $v0, $a1, $a3
    ctx->pc = 0x22ec78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x22ec7c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x22EC7Cu;
    {
        const bool branch_taken_0x22ec7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22EC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EC7Cu;
        // 0x22ec80: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ec7c) {
            ctx->pc = 0x22EC68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22ec68;
        }
    }
    ctx->pc = 0x22EC84u;
label_22ec84:
    // 0x22ec84: 0x2051021  addu        $v0, $s0, $a1
    ctx->pc = 0x22ec84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x22ec88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22ec88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22ec8c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22ec8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22ec90: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22ec90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22ec94: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x22ec94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22ec98: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x22ec98u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x22ec9c: 0x3e00008  jr          $ra
    ctx->pc = 0x22EC9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22ECA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EC9Cu;
        // 0x22eca0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22EC9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22ECA4u;
}
