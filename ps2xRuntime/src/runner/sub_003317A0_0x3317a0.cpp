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

// Function: sub_003317A0
// Address: 0x3317a0 - 0x331890
void sub_003317A0_0x3317a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003317A0_0x3317a0");
#endif

    switch (ctx->pc) {
        case 0x3317f0u: goto label_3317f0;
        case 0x331834u: goto label_331834;
        case 0x33186cu: goto label_33186c;
        default: break;
    }

    ctx->pc = 0x3317a0u;

    // 0x3317a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3317a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3317a4: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x3317a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x3317a8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3317a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3317ac: 0x2484bb30  addiu       $a0, $a0, -0x44D0
    ctx->pc = 0x3317acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    // 0x3317b0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3317b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3317b4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3317b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3317b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3317b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3317bc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3317bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3317c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3317c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3317c4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3317c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3317c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3317c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3317cc: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x3317ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3317d0: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x3317d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3317d4: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x3317d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3317d8: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3317d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3317dc: 0x94650004  lhu         $a1, 0x4($v1)
    ctx->pc = 0x3317dcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3317e0: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x3317e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x3317e4: 0x2167e  dsrl32      $v0, $v0, 25
    ctx->pc = 0x3317e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 25));
    // 0x3317e8: 0xc0bcff4  jal         func_2F3FD0
    ctx->pc = 0x3317E8u;
    SET_GPR_U32(ctx, 31, 0x3317F0u);
    ctx->pc = 0x3317ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3317E8u;
    // 0x3317ec: 0x3054ffff  andi        $s4, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3FD0u, 0x3317E8u, 0x3317F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3317F0u;
label_3317f0:
    // 0x3317f0: 0x328affff  andi        $t2, $s4, 0xFFFF
    ctx->pc = 0x3317f0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x3317f4: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x3317f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x3317f8: 0x15420011  bne         $t2, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3317F8u;
    {
        const bool branch_taken_0x3317f8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 2));
        ctx->pc = 0x3317FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3317F8u;
        // 0x3317fc: 0x320300ff  andi        $v1, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3317f8) {
            ctx->pc = 0x331840u;
            goto label_331840;
        }
    }
    ctx->pc = 0x331800u;
    // 0x331800: 0x2711021  addu        $v0, $s3, $s1
    ctx->pc = 0x331800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x331804: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x331804u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x331808: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x331808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x33180c: 0x3c090068  lui         $t1, 0x68
    ctx->pc = 0x33180cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)104 << 16));
    // 0x331810: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x331810u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x331814: 0x3246ffff  andi        $a2, $s2, 0xFFFF
    ctx->pc = 0x331814u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x331818: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x331818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x33181c: 0x306700ff  andi        $a3, $v1, 0xFF
    ctx->pc = 0x33181cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x331820: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x331820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x331824: 0x24080012  addiu       $t0, $zero, 0x12
    ctx->pc = 0x331824u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x331828: 0x2529cdf8  addiu       $t1, $t1, -0x3208
    ctx->pc = 0x331828u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294954488));
    // 0x33182c: 0xc095f88  jal         func_257E20
    ctx->pc = 0x33182Cu;
    SET_GPR_U32(ctx, 31, 0x331834u);
    ctx->pc = 0x331830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33182Cu;
    // 0x331830: 0x344a0036  ori         $t2, $v0, 0x36 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54);
    ctx->in_delay_slot = false;
    ctx->pc = 0x257E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257E20u, 0x33182Cu, 0x331834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331834u;
label_331834:
    // 0x331834: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x331834u;
    {
        const bool branch_taken_0x331834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x331834) {
            ctx->pc = 0x331870u;
            goto label_331870;
        }
    }
    ctx->pc = 0x33183Cu;
    // 0x33183c: 0x0  nop
    ctx->pc = 0x33183cu;
    // NOP
label_331840:
    // 0x331840: 0x2711021  addu        $v0, $s3, $s1
    ctx->pc = 0x331840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x331844: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x331844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x331848: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x331848u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x33184c: 0x3c090068  lui         $t1, 0x68
    ctx->pc = 0x33184cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)104 << 16));
    // 0x331850: 0x3246ffff  andi        $a2, $s2, 0xFFFF
    ctx->pc = 0x331850u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x331854: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x331854u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x331858: 0x306700ff  andi        $a3, $v1, 0xFF
    ctx->pc = 0x331858u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33185c: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x33185cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x331860: 0x24080012  addiu       $t0, $zero, 0x12
    ctx->pc = 0x331860u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x331864: 0xc095f88  jal         func_257E20
    ctx->pc = 0x331864u;
    SET_GPR_U32(ctx, 31, 0x33186Cu);
    ctx->pc = 0x331868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331864u;
    // 0x331868: 0x2529ce18  addiu       $t1, $t1, -0x31E8 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294954520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257E20u, 0x331864u, 0x33186Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33186Cu;
label_33186c:
    // 0x33186c: 0x0  nop
    ctx->pc = 0x33186cu;
    // NOP
label_331870:
    // 0x331870: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x331870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x331874: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x331874u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x331878: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x331878u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33187c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33187cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x331880: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x331880u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x331884: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x331884u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x331888: 0x3e00008  jr          $ra
    ctx->pc = 0x331888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33188Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331888u;
        // 0x33188c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x331888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x331890u;
}
