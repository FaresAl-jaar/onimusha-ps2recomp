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

// Function: sub_00245910
// Address: 0x245910 - 0x245994
void sub_00245910_0x245910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245910_0x245910");
#endif

    switch (ctx->pc) {
        case 0x245928u: goto label_245928;
        case 0x245944u: goto label_245944;
        case 0x24597cu: goto label_24597c;
        default: break;
    }

    ctx->pc = 0x245910u;

    // 0x245910: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x245910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x245914: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x245914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x245918: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x245918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24591c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x24591cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x245920: 0xc094bb4  jal         func_252ED0
    ctx->pc = 0x245920u;
    SET_GPR_U32(ctx, 31, 0x245928u);
    ctx->pc = 0x245924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245920u;
    // 0x245924: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252ED0u, 0x245920u, 0x245928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245928u;
label_245928:
    // 0x245928: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x245928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24592c: 0x2450e980  addiu       $s0, $v0, -0x1680
    ctx->pc = 0x24592cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961536));
    // 0x245930: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x245930u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x4CE980u));
    // 0x245934: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x245934u;
    {
        const bool branch_taken_0x245934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x245934) {
            ctx->pc = 0x245974u;
            goto label_245974;
        }
    }
    ctx->pc = 0x24593Cu;
    // 0x24593c: 0xc091638  jal         func_2458E0
    ctx->pc = 0x24593Cu;
    SET_GPR_U32(ctx, 31, 0x245944u);
    ctx->pc = 0x2458E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2458E0u, 0x24593Cu, 0x245944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245944u;
label_245944:
    // 0x245944: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x245944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x245948: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x245948u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x24594c: 0x3c03004d  lui         $v1, 0x4D
    ctx->pc = 0x24594cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)77 << 16));
    // 0x245950: 0x2463e9e0  addiu       $v1, $v1, -0x1620
    ctx->pc = 0x245950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961632));
    // 0x245954: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x245954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x245958: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x245958u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4CE9E0u));
    // 0x24595c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x24595cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245960: 0xa2050003  sb          $a1, 0x3($s0)
    ctx->pc = 0x245960u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x245964: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x245964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x245968: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x245968u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x24596c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x24596cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4CE9E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4CE9E0u, _value); } while (0);
    // 0x245970: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x245970u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_245974:
    // 0x245974: 0xc094bd2  jal         func_252F48
    ctx->pc = 0x245974u;
    SET_GPR_U32(ctx, 31, 0x24597Cu);
    ctx->pc = 0x252F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252F48u, 0x245974u, 0x24597Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24597Cu;
label_24597c:
    // 0x24597c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x24597cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245980: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x245980u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x245984: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x245984u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x245988: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x245988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24598c: 0x3e00008  jr          $ra
    ctx->pc = 0x24598Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x245990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24598Cu;
        // 0x245990: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24598Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x245994u;
}
