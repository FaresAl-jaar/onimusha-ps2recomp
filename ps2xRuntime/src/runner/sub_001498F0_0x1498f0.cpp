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

// Function: sub_001498F0
// Address: 0x1498f0 - 0x149960
void sub_001498F0_0x1498f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001498F0_0x1498f0");
#endif

    switch (ctx->pc) {
        case 0x149940u: goto label_149940;
        default: break;
    }

    ctx->pc = 0x1498f0u;

    // 0x1498f0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1498f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1498f4: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x1498f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1498f8: 0x47001a  div         $zero, $v0, $a3
    ctx->pc = 0x1498f8u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1498fc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1498fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x149900: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x149900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x149904: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x149904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x149908: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x149908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x14990c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x14990cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149910: 0xa023cea9  sb          $v1, -0x3157($at)
    ctx->pc = 0x149910u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEA9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x81CEA9u, _value); } while (0);
    // 0x149914: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x149914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149918: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x149918u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14991c: 0x3408fffe  ori         $t0, $zero, 0xFFFE
    ctx->pc = 0x14991cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
    // 0x149920: 0x1812  mflo        $v1
    ctx->pc = 0x149920u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x149924: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x149924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x149928: 0x7047001a  div1        $zero, $v0, $a3
    ctx->pc = 0x149928u;
    { int32_t divisor = GPR_S32(ctx, 7); int32_t dividend = GPR_S32(ctx, 2); if (divisor != 0) {     if (divisor == -1 && dividend == INT32_MIN) {         ctx->lo1 = (uint64_t)(int64_t)INT32_MIN; ctx->hi1 = 0;     } else {         ctx->lo1 = (uint64_t)(int64_t)(dividend / divisor);         ctx->hi1 = (uint64_t)(int64_t)(dividend % divisor);     } } else {     ctx->lo1 = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi1 = (uint64_t)(int64_t)dividend; } }
    // 0x14992c: 0x0  nop
    ctx->pc = 0x14992cu;
    // NOP
    // 0x149930: 0x0  nop
    ctx->pc = 0x149930u;
    // NOP
    // 0x149934: 0x70003812  mflo1       $a3
    ctx->pc = 0x149934u;
    SET_GPR_U64(ctx, 7, ctx->lo1);
    // 0x149938: 0xc05269c  jal         func_149A70
    ctx->pc = 0x149938u;
    SET_GPR_U32(ctx, 31, 0x149940u);
    ctx->pc = 0x14993Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149938u;
    // 0x14993c: 0xaf838558  sw          $v1, -0x7AA8($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935896), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149A70u, 0x149938u, 0x149940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149940u;
label_149940:
    // 0x149940: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x149940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
    // 0x149944: 0x8c23cc34  lw          $v1, -0x33CC($at)
    ctx->pc = 0x149944u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x82CC34u));
    // 0x149948: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x149948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x14994c: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x14994cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
    // 0x149950: 0xac23cc34  sw          $v1, -0x33CC($at)
    ctx->pc = 0x149950u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x82CC34u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x82CC34u, _value); } while (0);
    // 0x149954: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x149954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149958: 0x3e00008  jr          $ra
    ctx->pc = 0x149958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14995Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149958u;
        // 0x14995c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149960u;
}
