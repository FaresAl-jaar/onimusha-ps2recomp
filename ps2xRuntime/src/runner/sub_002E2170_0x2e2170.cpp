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

// Function: sub_002E2170
// Address: 0x2e2170 - 0x2e2244
void sub_002E2170_0x2e2170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E2170_0x2e2170");
#endif

    switch (ctx->pc) {
        case 0x2e21a8u: goto label_2e21a8;
        case 0x2e21d4u: goto label_2e21d4;
        default: break;
    }

    ctx->pc = 0x2e2170u;

    // 0x2e2170: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2e2170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2e2174: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2e2174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2e2178: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2e2178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2e217c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2e217cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2e2180: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2e2180u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2184: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e2184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2e2188: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2e2188u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e218c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e218cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e2190: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2e2190u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2194: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e2194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e2198: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x2e2198u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e219c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e219cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e21a0: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x2e21a0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2e21a4: 0x30d0ffff  andi        $s0, $a2, 0xFFFF
    ctx->pc = 0x2e21a4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
label_2e21a8:
    // 0x2e21a8: 0x8e450040  lw          $a1, 0x40($s2)
    ctx->pc = 0x2e21a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x2e21ac: 0x10a00018  beqz        $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2E21ACu;
    {
        const bool branch_taken_0x2e21ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e21ac) {
            ctx->pc = 0x2E2210u;
            goto label_2e2210;
        }
    }
    ctx->pc = 0x2E21B4u;
    // 0x2e21b4: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E21B4u;
    {
        const bool branch_taken_0x2e21b4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e21b4) {
            ctx->pc = 0x2E21C8u;
            goto label_2e21c8;
        }
    }
    ctx->pc = 0x2E21BCu;
    // 0x2e21bc: 0x8ea3003c  lw          $v1, 0x3C($s5)
    ctx->pc = 0x2e21bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 60)));
    // 0x2e21c0: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2E21C0u;
    {
        const bool branch_taken_0x2e21c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e21c0) {
            ctx->pc = 0x2E2210u;
            goto label_2e2210;
        }
    }
    ctx->pc = 0x2E21C8u;
label_2e21c8:
    // 0x2e21c8: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2e21c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2e21cc: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x2E21CCu;
    SET_GPR_U32(ctx, 31, 0x2E21D4u);
    ctx->pc = 0x2E21D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E21CCu;
    // 0x2e21d0: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x2E21CCu, 0x2E21D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E21D4u;
label_2e21d4:
    // 0x2e21d4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2E21D4u;
    {
        const bool branch_taken_0x2e21d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e21d4) {
            ctx->pc = 0x2E2210u;
            goto label_2e2210;
        }
    }
    ctx->pc = 0x2E21DCu;
    // 0x2e21dc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E21DCu;
    {
        const bool branch_taken_0x2e21dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e21dc) {
            ctx->pc = 0x2E21F8u;
            goto label_2e21f8;
        }
    }
    ctx->pc = 0x2E21E4u;
    // 0x2e21e4: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x2e21e4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e21e8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2e21e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e21ec: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E21ECu;
    {
        const bool branch_taken_0x2e21ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e21ec) {
            ctx->pc = 0x2E2210u;
            goto label_2e2210;
        }
    }
    ctx->pc = 0x2E21F4u;
    // 0x2e21f4: 0x0  nop
    ctx->pc = 0x2e21f4u;
    // NOP
label_2e21f8:
    // 0x2e21f8: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E21F8u;
    {
        const bool branch_taken_0x2e21f8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E21FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E21F8u;
        // 0x2e21fc: 0xa0402ab6  sb          $zero, 0x2AB6($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 10934), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e21f8) {
            ctx->pc = 0x2E2208u;
            goto label_2e2208;
        }
    }
    ctx->pc = 0x2E2200u;
    // 0x2e2200: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E2200u;
    {
        const bool branch_taken_0x2e2200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2200u;
        // 0x2e2204: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2200) {
            ctx->pc = 0x2E220Cu;
            goto label_2e220c;
        }
    }
    ctx->pc = 0x2E2208u;
label_2e2208:
    // 0x2e2208: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e2208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e220c:
    // 0x2e220c: 0xa4432ab4  sh          $v1, 0x2AB4($v0)
    ctx->pc = 0x2e220cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 10932), (uint16_t)GPR_U32(ctx, 3));
label_2e2210:
    // 0x2e2210: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2e2210u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2e2214: 0x2e630020  sltiu       $v1, $s3, 0x20
    ctx->pc = 0x2e2214u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x2e2218: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x2E2218u;
    {
        const bool branch_taken_0x2e2218 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E221Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2218u;
        // 0x2e221c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2218) {
            ctx->pc = 0x2E21A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e21a8;
        }
    }
    ctx->pc = 0x2E2220u;
    // 0x2e2220: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2e2220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e2224: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2e2224u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e2228: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2e2228u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e222c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e222cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e2230: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e2230u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e2234: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e2234u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e2238: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e2238u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e223c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E223Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E2240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E223Cu;
        // 0x2e2240: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E223Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E2244u;
}
