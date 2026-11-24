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

// Function: sub_003891B0
// Address: 0x3891b0 - 0x389270
void sub_003891B0_0x3891b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003891B0_0x3891b0");
#endif

    switch (ctx->pc) {
        case 0x3891e0u: goto label_3891e0;
        case 0x3891f4u: goto label_3891f4;
        case 0x38922cu: goto label_38922c;
        case 0x389258u: goto label_389258;
        default: break;
    }

    ctx->pc = 0x3891b0u;

    // 0x3891b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3891b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3891b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3891b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3891b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3891b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3891bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3891bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3891c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3891c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3891c4: 0x90822b62  lbu         $v0, 0x2B62($a0)
    ctx->pc = 0x3891c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11106)));
    // 0x3891c8: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x3891C8u;
    {
        const bool branch_taken_0x3891c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3891CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3891C8u;
        // 0x3891cc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3891c8) {
            ctx->pc = 0x389250u;
            goto label_389250;
        }
    }
    ctx->pc = 0x3891D0u;
    // 0x3891d0: 0x8e052b38  lw          $a1, 0x2B38($s0)
    ctx->pc = 0x3891d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11064)));
    // 0x3891d4: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x3891d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x3891d8: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x3891D8u;
    SET_GPR_U32(ctx, 31, 0x3891E0u);
    ctx->pc = 0x3891DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3891D8u;
    // 0x3891dc: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x3891D8u, 0x3891E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3891E0u;
label_3891e0:
    // 0x3891e0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3891e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3891e4: 0x1240001a  beqz        $s2, . + 4 + (0x1A << 2)
    ctx->pc = 0x3891E4u;
    {
        const bool branch_taken_0x3891e4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3891E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3891E4u;
        // 0x3891e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3891e4) {
            ctx->pc = 0x389250u;
            goto label_389250;
        }
    }
    ctx->pc = 0x3891ECu;
    // 0x3891ec: 0xc0e1d28  jal         func_3874A0
    ctx->pc = 0x3891ECu;
    SET_GPR_U32(ctx, 31, 0x3891F4u);
    ctx->pc = 0x3874A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3874A0u, 0x3891ECu, 0x3891F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3891F4u;
label_3891f4:
    // 0x3891f4: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x3891f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x3891f8: 0x8c226ccc  lw          $v0, 0x6CCC($at)
    ctx->pc = 0x3891f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8D6CCCu));
    // 0x3891fc: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x3891fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x389200: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x389200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x389204: 0xac226ccc  sw          $v0, 0x6CCC($at)
    ctx->pc = 0x389204u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8D6CCCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6CCCu, _value); } while (0);
    // 0x389208: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x389208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x38920c: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x38920cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x389210: 0x1240000f  beqz        $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x389210u;
    {
        const bool branch_taken_0x389210 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x389214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389210u;
        // 0x389214: 0xac226ce4  sw          $v0, 0x6CE4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 27876), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389210) {
            ctx->pc = 0x389250u;
            goto label_389250;
        }
    }
    ctx->pc = 0x389218u;
    // 0x389218: 0x8e4229c0  lw          $v0, 0x29C0($s2)
    ctx->pc = 0x389218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10688)));
    // 0x38921c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x38921Cu;
    {
        const bool branch_taken_0x38921c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x389220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38921Cu;
        // 0x389220: 0x265129c0  addiu       $s1, $s2, 0x29C0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 10688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38921c) {
            ctx->pc = 0x389250u;
            goto label_389250;
        }
    }
    ctx->pc = 0x389224u;
    // 0x389224: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x389224u;
    SET_GPR_U32(ctx, 31, 0x38922Cu);
    ctx->pc = 0x389228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389224u;
    // 0x389228: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x389224u, 0x38922Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38922Cu;
label_38922c:
    // 0x38922c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x38922cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x389230: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x389230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x389234: 0xac226d90  sw          $v0, 0x6D90($at)
    ctx->pc = 0x389234u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8D6D90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6D90u, _value); } while (0);
    // 0x389238: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x389238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x38923c: 0xac226df0  sw          $v0, 0x6DF0($at)
    ctx->pc = 0x38923cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8D6DF0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6DF0u, _value); } while (0);
    // 0x389240: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x389240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x389244: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x389244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x389248: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x389248u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x38924c: 0xac226dec  sw          $v0, 0x6DEC($at)
    ctx->pc = 0x38924cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8D6DECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6DECu, _value); } while (0);
label_389250:
    // 0x389250: 0xc0a4d18  jal         func_293460
    ctx->pc = 0x389250u;
    SET_GPR_U32(ctx, 31, 0x389258u);
    ctx->pc = 0x389254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389250u;
    // 0x389254: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293460u, 0x389250u, 0x389258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389258u;
label_389258:
    // 0x389258: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x389258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38925c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x38925cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x389260: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x389260u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x389264: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x389264u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x389268: 0x3e00008  jr          $ra
    ctx->pc = 0x389268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38926Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389268u;
        // 0x38926c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x389270u;
}
