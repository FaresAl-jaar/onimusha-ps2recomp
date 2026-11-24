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

// Function: sub_002539F8
// Address: 0x2539f8 - 0x253aa0
void sub_002539F8_0x2539f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002539F8_0x2539f8");
#endif

    switch (ctx->pc) {
        case 0x253a14u: goto label_253a14;
        case 0x253a28u: goto label_253a28;
        case 0x253a3cu: goto label_253a3c;
        case 0x253a50u: goto label_253a50;
        case 0x253a64u: goto label_253a64;
        case 0x253a70u: goto label_253a70;
        default: break;
    }

    ctx->pc = 0x2539f8u;

    // 0x2539f8: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x2539f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x2539fc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2539fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x253a00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x253a00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253a04: 0x24840738  addiu       $a0, $a0, 0x738
    ctx->pc = 0x253a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1848));
    // 0x253a08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x253a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x253a0c: 0xc049590  jal         func_125640
    ctx->pc = 0x253A0Cu;
    SET_GPR_U32(ctx, 31, 0x253A14u);
    ctx->pc = 0x253A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253A0Cu;
    // 0x253a10: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x253A0Cu, 0x253A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253A14u;
label_253a14:
    // 0x253a14: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x253a14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x253a18: 0x24848960  addiu       $a0, $a0, -0x76A0
    ctx->pc = 0x253a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936928));
    // 0x253a1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x253a1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253a20: 0xc049590  jal         func_125640
    ctx->pc = 0x253A20u;
    SET_GPR_U32(ctx, 31, 0x253A28u);
    ctx->pc = 0x253A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253A20u;
    // 0x253a24: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x253A20u, 0x253A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253A28u;
label_253a28:
    // 0x253a28: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x253a28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x253a2c: 0x24848968  addiu       $a0, $a0, -0x7698
    ctx->pc = 0x253a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936936));
    // 0x253a30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x253a30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253a34: 0xc049590  jal         func_125640
    ctx->pc = 0x253A34u;
    SET_GPR_U32(ctx, 31, 0x253A3Cu);
    ctx->pc = 0x253A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253A34u;
    // 0x253a38: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x253A34u, 0x253A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253A3Cu;
label_253a3c:
    // 0x253a3c: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x253a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x253a40: 0x24848980  addiu       $a0, $a0, -0x7680
    ctx->pc = 0x253a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936960));
    // 0x253a44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x253a44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253a48: 0xc049590  jal         func_125640
    ctx->pc = 0x253A48u;
    SET_GPR_U32(ctx, 31, 0x253A50u);
    ctx->pc = 0x253A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253A48u;
    // 0x253a4c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x253A48u, 0x253A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253A50u;
label_253a50:
    // 0x253a50: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x253a50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x253a54: 0x24848988  addiu       $a0, $a0, -0x7678
    ctx->pc = 0x253a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936968));
    // 0x253a58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x253a58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253a5c: 0xc049590  jal         func_125640
    ctx->pc = 0x253A5Cu;
    SET_GPR_U32(ctx, 31, 0x253A64u);
    ctx->pc = 0x253A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253A5Cu;
    // 0x253a60: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x253A5Cu, 0x253A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253A64u;
label_253a64:
    // 0x253a64: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x253a64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x253a68: 0x24630718  addiu       $v1, $v1, 0x718
    ctx->pc = 0x253a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1816));
    // 0x253a6c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x253a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_253a70:
    // 0x253a70: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x253a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x253a74: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x253a74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x253a78: 0x0  nop
    ctx->pc = 0x253a78u;
    // NOP
    // 0x253a7c: 0x0  nop
    ctx->pc = 0x253a7cu;
    // NOP
    // 0x253a80: 0x0  nop
    ctx->pc = 0x253a80u;
    // NOP
    // 0x253a84: 0x441fffa  bgez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x253A84u;
    {
        const bool branch_taken_0x253a84 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x253A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253A84u;
        // 0x253a88: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253a84) {
            ctx->pc = 0x253A70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_253a70;
        }
    }
    ctx->pc = 0x253A8Cu;
    // 0x253a8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x253a8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253a90: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x253a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x253a94: 0xac408978  sw          $zero, -0x7688($v0)
    ctx->pc = 0x253a94u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x888978u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x888978u, _value); } while (0);
    // 0x253a98: 0x3e00008  jr          $ra
    ctx->pc = 0x253A98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253A98u;
        // 0x253a9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253A98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253AA0u;
}
