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

// Function: sub_003CCBB0
// Address: 0x3ccbb0 - 0x3ccc6c
void sub_003CCBB0_0x3ccbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CCBB0_0x3ccbb0");
#endif

    switch (ctx->pc) {
        case 0x3ccc1cu: goto label_3ccc1c;
        case 0x3ccc4cu: goto label_3ccc4c;
        default: break;
    }

    ctx->pc = 0x3ccbb0u;

    // 0x3ccbb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ccbb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3ccbb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3ccbb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3ccbb8: 0x908701c2  lbu         $a3, 0x1C2($a0)
    ctx->pc = 0x3ccbb8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 450)));
    // 0x3ccbbc: 0x28e20002  slti        $v0, $a3, 0x2
    ctx->pc = 0x3ccbbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3ccbc0: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x3CCBC0u;
    {
        const bool branch_taken_0x3ccbc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CCBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCBC0u;
        // 0x3ccbc4: 0x3c01008f  lui         $at, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ccbc0) {
            ctx->pc = 0x3CCC58u;
            goto label_3ccc58;
        }
    }
    ctx->pc = 0x3CCBC8u;
    // 0x3ccbc8: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x3ccbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
    // 0x3ccbcc: 0x8c26ea28  lw          $a2, -0x15D8($at)
    ctx->pc = 0x3ccbccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961704)));
    // 0x3ccbd0: 0x344201a0  ori         $v0, $v0, 0x1A0
    ctx->pc = 0x3ccbd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)416);
    // 0x3ccbd4: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x3ccbd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x3ccbd8: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x3CCBD8u;
    {
        const bool branch_taken_0x3ccbd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CCBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCBD8u;
        // 0x3ccbdc: 0x3c020008  lui         $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ccbd8) {
            ctx->pc = 0x3CCC58u;
            goto label_3ccc58;
        }
    }
    ctx->pc = 0x3CCBE0u;
    // 0x3ccbe0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x3ccbe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3ccbe4: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x3ccbe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x3ccbe8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ccbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ccbec: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x3ccbecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x3ccbf0: 0x8082032e  lb          $v0, 0x32E($a0)
    ctx->pc = 0x3ccbf0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 814)));
    // 0x3ccbf4: 0x66280a  movz        $a1, $v1, $a2
    ctx->pc = 0x3ccbf4u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x3ccbf8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3ccbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3ccbfc: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x3ccbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3ccc00: 0x47001a  div         $zero, $v0, $a3
    ctx->pc = 0x3ccc00u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3ccc04: 0x0  nop
    ctx->pc = 0x3ccc04u;
    // NOP
    // 0x3ccc08: 0x0  nop
    ctx->pc = 0x3ccc08u;
    // NOP
    // 0x3ccc0c: 0x1010  mfhi        $v0
    ctx->pc = 0x3ccc0cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3ccc10: 0xa082032e  sb          $v0, 0x32E($a0)
    ctx->pc = 0x3ccc10u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 814), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ccc14: 0xc0b78d0  jal         func_2DE340
    ctx->pc = 0x3CCC14u;
    SET_GPR_U32(ctx, 31, 0x3CCC1Cu);
    ctx->pc = 0x3CCC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCC14u;
    // 0x3ccc18: 0x24840038  addiu       $a0, $a0, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE340u, 0x3CCC14u, 0x3CCC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCC1Cu;
label_3ccc1c:
    // 0x3ccc1c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3ccc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3ccc20: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3ccc20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3ccc24: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3ccc24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3ccc28: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3ccc28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3ccc2c: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x3ccc2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x3ccc30: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3ccc30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ccc34: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3ccc34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ccc38: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3ccc38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ccc3c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3ccc3cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ccc40: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3ccc40u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ccc44: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3CCC44u;
    SET_GPR_U32(ctx, 31, 0x3CCC4Cu);
    ctx->pc = 0x3CCC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCC44u;
    // 0x3ccc48: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3CCC44u, 0x3CCC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCC4Cu;
label_3ccc4c:
    // 0x3ccc4c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3CCC4Cu;
    {
        const bool branch_taken_0x3ccc4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CCC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCC4Cu;
        // 0x3ccc50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ccc4c) {
            ctx->pc = 0x3CCC60u;
            goto label_3ccc60;
        }
    }
    ctx->pc = 0x3CCC54u;
    // 0x3ccc54: 0x0  nop
    ctx->pc = 0x3ccc54u;
    // NOP
label_3ccc58:
    // 0x3ccc58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3ccc58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ccc5c: 0x0  nop
    ctx->pc = 0x3ccc5cu;
    // NOP
label_3ccc60:
    // 0x3ccc60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3ccc60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ccc64: 0x3e00008  jr          $ra
    ctx->pc = 0x3CCC64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CCC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCC64u;
        // 0x3ccc68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CCC64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CCC6Cu;
}
