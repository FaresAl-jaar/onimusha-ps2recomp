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

// Function: sub_00247490
// Address: 0x247490 - 0x247510
void sub_00247490_0x247490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247490_0x247490");
#endif

    switch (ctx->pc) {
        case 0x2474a4u: goto label_2474a4;
        case 0x2474b4u: goto label_2474b4;
        case 0x2474e4u: goto label_2474e4;
        case 0x2474fcu: goto label_2474fc;
        default: break;
    }

    ctx->pc = 0x247490u;

    // 0x247490: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x247490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x247494: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x247494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x247498: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x247498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x24749c: 0xc0437b4  jal         func_10DED0
    ctx->pc = 0x24749Cu;
    SET_GPR_U32(ctx, 31, 0x2474A4u);
    ctx->pc = 0x2474A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24749Cu;
    // 0x2474a0: 0x3c10004d  lui         $s0, 0x4D (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)77 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DED0u, 0x24749Cu, 0x2474A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2474A4u;
label_2474a4:
    // 0x2474a4: 0x2610fb30  addiu       $s0, $s0, -0x4D0
    ctx->pc = 0x2474a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966064));
    // 0x2474a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2474a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2474ac: 0xc04485a  jal         func_112168
    ctx->pc = 0x2474ACu;
    SET_GPR_U32(ctx, 31, 0x2474B4u);
    ctx->pc = 0x2474B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2474ACu;
    // 0x2474b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112168u, 0x2474ACu, 0x2474B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2474B4u;
label_2474b4:
    // 0x2474b4: 0x3c04004d  lui         $a0, 0x4D
    ctx->pc = 0x2474b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)77 << 16));
    // 0x2474b8: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x2474b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x2474bc: 0x3c060024  lui         $a2, 0x24
    ctx->pc = 0x2474bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)36 << 16));
    // 0x2474c0: 0x8c45f224  lw          $a1, -0xDDC($v0)
    ctx->pc = 0x2474c0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x4CF224u));
    // 0x2474c4: 0x3c07004d  lui         $a3, 0x4D
    ctx->pc = 0x2474c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)77 << 16));
    // 0x2474c8: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x2474c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2474cc: 0x24c673e0  addiu       $a2, $a2, 0x73E0
    ctx->pc = 0x2474ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29664));
    // 0x2474d0: 0x24e7fb50  addiu       $a3, $a3, -0x4B0
    ctx->pc = 0x2474d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966096));
    // 0x2474d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2474d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2474d8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2474d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2474dc: 0xc044880  jal         func_112200
    ctx->pc = 0x2474DCu;
    SET_GPR_U32(ctx, 31, 0x2474E4u);
    ctx->pc = 0x2474E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2474DCu;
    // 0x2474e0: 0x2484fae8  addiu       $a0, $a0, -0x518 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112200u, 0x2474DCu, 0x2474E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2474E4u;
label_2474e4:
    // 0x2474e4: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x2474e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x2474e8: 0x2442f228  addiu       $v0, $v0, -0xDD8
    ctx->pc = 0x2474e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963752));
    // 0x2474ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2474ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2474f0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2474f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4CF228u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4CF228u, _value); } while (0);
    // 0x2474f4: 0xc044986  jal         func_112618
    ctx->pc = 0x2474F4u;
    SET_GPR_U32(ctx, 31, 0x2474FCu);
    ctx->pc = 0x2474F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2474F4u;
    // 0x2474f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112618u, 0x2474F4u, 0x2474FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2474FCu;
label_2474fc:
    // 0x2474fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2474fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247500: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x247500u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x247504: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x247504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x247508: 0x3e00008  jr          $ra
    ctx->pc = 0x247508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24750Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247508u;
        // 0x24750c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247510u;
}
