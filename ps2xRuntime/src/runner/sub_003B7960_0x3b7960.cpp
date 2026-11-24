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

// Function: sub_003B7960
// Address: 0x3b7960 - 0x3b79d8
void sub_003B7960_0x3b7960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B7960_0x3b7960");
#endif

    switch (ctx->pc) {
        case 0x3b798cu: goto label_3b798c;
        case 0x3b79bcu: goto label_3b79bc;
        default: break;
    }

    ctx->pc = 0x3b7960u;

    // 0x3b7960: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b7960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b7964: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b7964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3b7968: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b7968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3b796c: 0x8c8206c8  lw          $v0, 0x6C8($a0)
    ctx->pc = 0x3b796cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1736)));
    // 0x3b7970: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b7970u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7974: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x3b7974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x3b7978: 0xac8206c8  sw          $v0, 0x6C8($a0)
    ctx->pc = 0x3b7978u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1736), GPR_U32(ctx, 2));
    // 0x3b797c: 0x8c8206cc  lw          $v0, 0x6CC($a0)
    ctx->pc = 0x3b797cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1740)));
    // 0x3b7980: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x3b7980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x3b7984: 0xc0a4e30  jal         func_2938C0
    ctx->pc = 0x3B7984u;
    SET_GPR_U32(ctx, 31, 0x3B798Cu);
    ctx->pc = 0x3B7988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7984u;
    // 0x3b7988: 0xac8206cc  sw          $v0, 0x6CC($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 1740), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2938C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2938C0u, 0x3B7984u, 0x3B798Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B798Cu;
label_3b798c:
    // 0x3b798c: 0x8e0329c0  lw          $v1, 0x29C0($s0)
    ctx->pc = 0x3b798cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x3b7990: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x3b7990u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3b7994: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x3B7994u;
    {
        const bool branch_taken_0x3b7994 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b7994) {
            ctx->pc = 0x3B79C8u;
            goto label_3b79c8;
        }
    }
    ctx->pc = 0x3B799Cu;
    // 0x3b799c: 0x92032b4b  lbu         $v1, 0x2B4B($s0)
    ctx->pc = 0x3b799cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11083)));
    // 0x3b79a0: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x3b79a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x3b79a4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3B79A4u;
    {
        const bool branch_taken_0x3b79a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b79a4) {
            ctx->pc = 0x3B79C8u;
            goto label_3b79c8;
        }
    }
    ctx->pc = 0x3B79ACu;
    // 0x3b79ac: 0x8e0507c0  lw          $a1, 0x7C0($s0)
    ctx->pc = 0x3b79acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1984)));
    // 0x3b79b0: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x3b79b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x3b79b4: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x3B79B4u;
    SET_GPR_U32(ctx, 31, 0x3B79BCu);
    ctx->pc = 0x3B79B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B79B4u;
    // 0x3b79b8: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x3B79B4u, 0x3B79BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B79BCu;
label_3b79bc:
    // 0x3b79bc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3B79BCu;
    {
        const bool branch_taken_0x3b79bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B79C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B79BCu;
        // 0x3b79c0: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b79bc) {
            ctx->pc = 0x3B79C8u;
            goto label_3b79c8;
        }
    }
    ctx->pc = 0x3B79C4u;
    // 0x3b79c4: 0xa4430784  sh          $v1, 0x784($v0)
    ctx->pc = 0x3b79c4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1924), (uint16_t)GPR_U32(ctx, 3));
label_3b79c8:
    // 0x3b79c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b79c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b79cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b79ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b79d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3B79D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B79D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B79D0u;
        // 0x3b79d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B79D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B79D8u;
}
