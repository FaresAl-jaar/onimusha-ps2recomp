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

// Function: sub_002CD3C0
// Address: 0x2cd3c0 - 0x2cd4a0
void sub_002CD3C0_0x2cd3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CD3C0_0x2cd3c0");
#endif

    switch (ctx->pc) {
        case 0x2cd450u: goto label_2cd450;
        case 0x2cd480u: goto label_2cd480;
        default: break;
    }

    ctx->pc = 0x2cd3c0u;

    // 0x2cd3c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2cd3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2cd3c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cd3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cd3c8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2cd3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2cd3cc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2cd3ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2cd3d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2cd3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2cd3d4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2cd3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2cd3d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cd3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2cd3dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cd3dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cd3e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2cd3e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd3e4: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x2cd3e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2cd3e8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2cd3e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd3ec: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x2cd3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x2cd3f0: 0x8ca608d8  lw          $a2, 0x8D8($a1)
    ctx->pc = 0x2cd3f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2264)));
    // 0x2cd3f4: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x2cd3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x2cd3f8: 0x8ca608dc  lw          $a2, 0x8DC($a1)
    ctx->pc = 0x2cd3f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2268)));
    // 0x2cd3fc: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x2cd3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
    // 0x2cd400: 0xaca008d8  sw          $zero, 0x8D8($a1)
    ctx->pc = 0x2cd400u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 2264), GPR_U32(ctx, 0));
    // 0x2cd404: 0xa0a22b08  sb          $v0, 0x2B08($a1)
    ctx->pc = 0x2cd404u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 11016), (uint8_t)GPR_U32(ctx, 2));
    // 0x2cd408: 0x8c24cebc  lw          $a0, -0x3144($at)
    ctx->pc = 0x2cd408u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x2cd40c: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2cd40cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2cd410: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2cd410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2cd414: 0x8c226ccc  lw          $v0, 0x6CCC($at)
    ctx->pc = 0x2cd414u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8D6CCCu));
    // 0x2cd418: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2cd418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2cd41c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x2cd41cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x2cd420: 0xac23cebc  sw          $v1, -0x3144($at)
    ctx->pc = 0x2cd420u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x2cd424: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2cd424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2cd428: 0xac226ccc  sw          $v0, 0x6CCC($at)
    ctx->pc = 0x2cd428u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8D6CCCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6CCCu, _value); } while (0);
    // 0x2cd42c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2cd42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2cd430: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2cd430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2cd434: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2CD434u;
    {
        const bool branch_taken_0x2cd434 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD434u;
        // 0x2cd438: 0xac226ce4  sw          $v0, 0x6CE4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 27876), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd434) {
            ctx->pc = 0x2CD478u;
            goto label_2cd478;
        }
    }
    ctx->pc = 0x2CD43Cu;
    // 0x2cd43c: 0x8e0229c0  lw          $v0, 0x29C0($s0)
    ctx->pc = 0x2cd43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x2cd440: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2CD440u;
    {
        const bool branch_taken_0x2cd440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD440u;
        // 0x2cd444: 0x261229c0  addiu       $s2, $s0, 0x29C0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 10688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd440) {
            ctx->pc = 0x2CD478u;
            goto label_2cd478;
        }
    }
    ctx->pc = 0x2CD448u;
    // 0x2cd448: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x2CD448u;
    SET_GPR_U32(ctx, 31, 0x2CD450u);
    ctx->pc = 0x2CD44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD448u;
    // 0x2cd44c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x2CD448u, 0x2CD450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD450u;
label_2cd450:
    // 0x2cd450: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2cd450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2cd454: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2cd454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2cd458: 0xac226d90  sw          $v0, 0x6D90($at)
    ctx->pc = 0x2cd458u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8D6D90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6D90u, _value); } while (0);
    // 0x2cd45c: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2cd45cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2cd460: 0xac226df0  sw          $v0, 0x6DF0($at)
    ctx->pc = 0x2cd460u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8D6DF0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6DF0u, _value); } while (0);
    // 0x2cd464: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2cd464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2cd468: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2cd468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2cd46c: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2cd46cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cd470: 0xac226dec  sw          $v0, 0x6DEC($at)
    ctx->pc = 0x2cd470u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8D6DECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6DECu, _value); } while (0);
    // 0x2cd474: 0x0  nop
    ctx->pc = 0x2cd474u;
    // NOP
label_2cd478:
    // 0x2cd478: 0xc0ed144  jal         func_3B4510
    ctx->pc = 0x2CD478u;
    SET_GPR_U32(ctx, 31, 0x2CD480u);
    ctx->pc = 0x2CD47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD478u;
    // 0x2cd47c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4510u, 0x2CD478u, 0x2CD480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD480u;
label_2cd480:
    // 0x2cd480: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2cd480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cd484: 0xa2230001  sb          $v1, 0x1($s1)
    ctx->pc = 0x2cd484u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2cd488: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2cd488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cd48c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2cd48cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cd490: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cd490u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cd494: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cd494u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cd498: 0x3e00008  jr          $ra
    ctx->pc = 0x2CD498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD498u;
        // 0x2cd49c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CD4A0u;
}
