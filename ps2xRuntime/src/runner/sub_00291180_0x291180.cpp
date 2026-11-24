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

// Function: sub_00291180
// Address: 0x291180 - 0x291224
void sub_00291180_0x291180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291180_0x291180");
#endif

    switch (ctx->pc) {
        case 0x2911b8u: goto label_2911b8;
        case 0x2911d8u: goto label_2911d8;
        case 0x2911f4u: goto label_2911f4;
        case 0x29120cu: goto label_29120c;
        default: break;
    }

    ctx->pc = 0x291180u;

    // 0x291180: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x291180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x291184: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x291184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x291188: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x291188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29118c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29118cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x291190: 0x9082011c  lbu         $v0, 0x11C($a0)
    ctx->pc = 0x291190u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 284)));
    // 0x291194: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x291194u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291198: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x291198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x29119c: 0xa082011c  sb          $v0, 0x11C($a0)
    ctx->pc = 0x29119cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 284), (uint8_t)GPR_U32(ctx, 2));
    // 0x2911a0: 0x94820030  lhu         $v0, 0x30($a0)
    ctx->pc = 0x2911a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2911a4: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x2911a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x2911a8: 0xa4820030  sh          $v0, 0x30($a0)
    ctx->pc = 0x2911a8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 48), (uint16_t)GPR_U32(ctx, 2));
    // 0x2911ac: 0x8c84004c  lw          $a0, 0x4C($a0)
    ctx->pc = 0x2911acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x2911b0: 0xc0a86fc  jal         func_2A1BF0
    ctx->pc = 0x2911B0u;
    SET_GPR_U32(ctx, 31, 0x2911B8u);
    ctx->pc = 0x2911B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2911B0u;
    // 0x2911b4: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1BF0u, 0x2911B0u, 0x2911B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2911B8u;
label_2911b8:
    // 0x2911b8: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x2911b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x2911bc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2911BCu;
    {
        const bool branch_taken_0x2911bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2911bc) {
            ctx->pc = 0x2911D8u;
            goto label_2911d8;
        }
    }
    ctx->pc = 0x2911C4u;
    // 0x2911c4: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x2911c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x2911c8: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x2911c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2911cc: 0xac620088  sw          $v0, 0x88($v1)
    ctx->pc = 0x2911ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 136), GPR_U32(ctx, 2));
    // 0x2911d0: 0xc0a83f8  jal         func_2A0FE0
    ctx->pc = 0x2911D0u;
    SET_GPR_U32(ctx, 31, 0x2911D8u);
    ctx->pc = 0x2911D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2911D0u;
    // 0x2911d4: 0x8e04004c  lw          $a0, 0x4C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0FE0u, 0x2911D0u, 0x2911D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2911D8u;
label_2911d8:
    // 0x2911d8: 0x8e110054  lw          $s1, 0x54($s0)
    ctx->pc = 0x2911d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2911dc: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x2911DCu;
    {
        const bool branch_taken_0x2911dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2911dc) {
            ctx->pc = 0x291210u;
            goto label_291210;
        }
    }
    ctx->pc = 0x2911E4u;
    // 0x2911e4: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x2911e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x2911e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2911e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2911ec: 0xc0600fc  jal         func_1803F0
    ctx->pc = 0x2911ECu;
    SET_GPR_U32(ctx, 31, 0x2911F4u);
    ctx->pc = 0x2911F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2911ECu;
    // 0x2911f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1803F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1803F0u, 0x2911ECu, 0x2911F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2911F4u;
label_2911f4:
    // 0x2911f4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2911f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2911f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2911f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2911fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2911fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291200: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x291200u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291204: 0xc060a74  jal         func_1829D0
    ctx->pc = 0x291204u;
    SET_GPR_U32(ctx, 31, 0x29120Cu);
    ctx->pc = 0x291208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291204u;
    // 0x291208: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1829D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1829D0u, 0x291204u, 0x29120Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29120Cu;
label_29120c:
    // 0x29120c: 0x0  nop
    ctx->pc = 0x29120cu;
    // NOP
label_291210:
    // 0x291210: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x291210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x291214: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x291214u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291218: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x291218u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29121c: 0x3e00008  jr          $ra
    ctx->pc = 0x29121Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29121Cu;
        // 0x291220: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29121Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x291224u;
}
