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

// Function: sub_00118780
// Address: 0x118780 - 0x1187cc
void sub_00118780_0x118780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118780_0x118780");
#endif

    switch (ctx->pc) {
        case 0x1187a4u: goto label_1187a4;
        case 0x1187acu: goto label_1187ac;
        default: break;
    }

    ctx->pc = 0x118780u;

    // 0x118780: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x118780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x118784: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x118784u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118788: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x118788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11878c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11878cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118790: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x118790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x118794: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x118794u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x118798: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x118798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11879c: 0xc046160  jal         func_118580
    ctx->pc = 0x11879Cu;
    SET_GPR_U32(ctx, 31, 0x1187A4u);
    ctx->pc = 0x1187A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11879Cu;
    // 0x1187a0: 0x24842a10  addiu       $a0, $a0, 0x2A10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118580u, 0x11879Cu, 0x1187A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1187A4u;
label_1187a4:
    // 0x1187a4: 0xc0461a6  jal         func_118698
    ctx->pc = 0x1187A4u;
    SET_GPR_U32(ctx, 31, 0x1187ACu);
    ctx->pc = 0x118698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118698u, 0x1187A4u, 0x1187ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1187ACu;
label_1187ac:
    // 0x1187ac: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1187acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1187b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1187b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1187b4: 0x8c452ee0  lw          $a1, 0x2EE0($v0)
    ctx->pc = 0x1187b4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x402EE0u));
    // 0x1187b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1187b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1187bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1187bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1187c0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1187c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1187c4: 0x8043900  j           func_10E400
    ctx->pc = 0x1187C4u;
    ctx->pc = 0x1187C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1187C4u;
    // 0x1187c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E400u;
    sub_0010E400_0x10e400(rdram, ctx, runtime); return;
    ctx->pc = 0x1187CCu;
}
