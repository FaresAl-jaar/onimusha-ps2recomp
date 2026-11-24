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

// Function: sub_00149960
// Address: 0x149960 - 0x1499d0
void sub_00149960_0x149960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149960_0x149960");
#endif

    switch (ctx->pc) {
        case 0x1499b0u: goto label_1499b0;
        default: break;
    }

    ctx->pc = 0x149960u;

    // 0x149960: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x149960u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149964: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x149964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x149968: 0x47001a  div         $zero, $v0, $a3
    ctx->pc = 0x149968u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x14996c: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x14996cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x149970: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x149970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x149974: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x149974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x149978: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x149978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14997c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x14997cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x149980: 0xa023cea9  sb          $v1, -0x3157($at)
    ctx->pc = 0x149980u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEA9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x81CEA9u, _value); } while (0);
    // 0x149984: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x149984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149988: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x149988u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14998c: 0x3408fffe  ori         $t0, $zero, 0xFFFE
    ctx->pc = 0x14998cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
    // 0x149990: 0x1812  mflo        $v1
    ctx->pc = 0x149990u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x149994: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x149994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x149998: 0x7047001a  div1        $zero, $v0, $a3
    ctx->pc = 0x149998u;
    { int32_t divisor = GPR_S32(ctx, 7); int32_t dividend = GPR_S32(ctx, 2); if (divisor != 0) {     if (divisor == -1 && dividend == INT32_MIN) {         ctx->lo1 = (uint64_t)(int64_t)INT32_MIN; ctx->hi1 = 0;     } else {         ctx->lo1 = (uint64_t)(int64_t)(dividend / divisor);         ctx->hi1 = (uint64_t)(int64_t)(dividend % divisor);     } } else {     ctx->lo1 = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi1 = (uint64_t)(int64_t)dividend; } }
    // 0x14999c: 0x0  nop
    ctx->pc = 0x14999cu;
    // NOP
    // 0x1499a0: 0x0  nop
    ctx->pc = 0x1499a0u;
    // NOP
    // 0x1499a4: 0x70003812  mflo1       $a3
    ctx->pc = 0x1499a4u;
    SET_GPR_U64(ctx, 7, ctx->lo1);
    // 0x1499a8: 0xc05269c  jal         func_149A70
    ctx->pc = 0x1499A8u;
    SET_GPR_U32(ctx, 31, 0x1499B0u);
    ctx->pc = 0x1499ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1499A8u;
    // 0x1499ac: 0xaf838558  sw          $v1, -0x7AA8($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935896), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149A70u, 0x1499A8u, 0x1499B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1499B0u;
label_1499b0:
    // 0x1499b0: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x1499b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
    // 0x1499b4: 0x8c23cc34  lw          $v1, -0x33CC($at)
    ctx->pc = 0x1499b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x82CC34u));
    // 0x1499b8: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x1499b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x1499bc: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x1499bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
    // 0x1499c0: 0xac23cc34  sw          $v1, -0x33CC($at)
    ctx->pc = 0x1499c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x82CC34u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x82CC34u, _value); } while (0);
    // 0x1499c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1499c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1499c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1499C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1499CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1499C8u;
        // 0x1499cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1499C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1499D0u;
}
