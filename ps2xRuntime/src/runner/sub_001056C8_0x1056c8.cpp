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

// Function: sub_001056C8
// Address: 0x1056c8 - 0x105718
void sub_001056C8_0x1056c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001056C8_0x1056c8");
#endif

    switch (ctx->pc) {
        case 0x1056e8u: goto label_1056e8;
        case 0x1056f8u: goto label_1056f8;
        default: break;
    }

    ctx->pc = 0x1056c8u;

    // 0x1056c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1056c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1056cc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1056ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1056d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1056d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1056d4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1056d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1056d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1056d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1056dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1056dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1056e0: 0xc041534  jal         func_1054D0
    ctx->pc = 0x1056E0u;
    SET_GPR_U32(ctx, 31, 0x1056E8u);
    ctx->pc = 0x1056E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1056E0u;
    // 0x1056e4: 0xc62c0008  lwc1        $f12, 0x8($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054D0u, 0x1056E0u, 0x1056E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1056E8u;
label_1056e8:
    // 0x1056e8: 0xc62c0004  lwc1        $f12, 0x4($s1)
    ctx->pc = 0x1056e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1056ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1056ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1056f0: 0xc041588  jal         func_105620
    ctx->pc = 0x1056F0u;
    SET_GPR_U32(ctx, 31, 0x1056F8u);
    ctx->pc = 0x1056F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1056F0u;
    // 0x1056f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105620u, 0x1056F0u, 0x1056F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1056F8u;
label_1056f8:
    // 0x1056f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1056f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1056fc: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x1056fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x105700: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x105700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x105704: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x105704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105708: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x105708u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10570c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10570cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105710: 0x804155e  j           func_105578
    ctx->pc = 0x105710u;
    ctx->pc = 0x105714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105710u;
    // 0x105714: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105578u;
    sub_00105578_0x105578(rdram, ctx, runtime); return;
    ctx->pc = 0x105718u;
}
