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

// Function: sub_00129918
// Address: 0x129918 - 0x1299c8
void sub_00129918_0x129918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00129918_0x129918");
#endif

    switch (ctx->pc) {
        case 0x12997cu: goto label_12997c;
        case 0x129990u: goto label_129990;
        default: break;
    }

    ctx->pc = 0x129918u;

    // 0x129918: 0x27bdfb80  addiu       $sp, $sp, -0x480
    ctx->pc = 0x129918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966144));
    // 0x12991c: 0x240a0400  addiu       $t2, $zero, 0x400
    ctx->pc = 0x12991cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x129920: 0xffb00460  sd          $s0, 0x460($sp)
    ctx->pc = 0x129920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1120), GPR_U64(ctx, 16));
    // 0x129924: 0x27a90060  addiu       $t1, $sp, 0x60
    ctx->pc = 0x129924u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x129928: 0xffb10468  sd          $s1, 0x468($sp)
    ctx->pc = 0x129928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1128), GPR_U64(ctx, 17));
    // 0x12992c: 0xffbf0470  sd          $ra, 0x470($sp)
    ctx->pc = 0x12992cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1136), GPR_U64(ctx, 31));
    // 0x129930: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x129930u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129934: 0xafa90010  sw          $t1, 0x10($sp)
    ctx->pc = 0x129934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 9));
    // 0x129938: 0x948f000c  lhu         $t7, 0xC($a0)
    ctx->pc = 0x129938u;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x12993c: 0x8c8c0054  lw          $t4, 0x54($a0)
    ctx->pc = 0x12993cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x129940: 0x960b000e  lhu         $t3, 0xE($s0)
    ctx->pc = 0x129940u;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x129944: 0x31effffd  andi        $t7, $t7, 0xFFFD
    ctx->pc = 0x129944u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)65533);
    // 0x129948: 0x8e0e001c  lw          $t6, 0x1C($s0)
    ctx->pc = 0x129948u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x12994c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12994cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129950: 0x8e0d0024  lw          $t5, 0x24($s0)
    ctx->pc = 0x129950u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x129954: 0xafac0054  sw          $t4, 0x54($sp)
    ctx->pc = 0x129954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 12));
    // 0x129958: 0xa7af000c  sh          $t7, 0xC($sp)
    ctx->pc = 0x129958u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 15));
    // 0x12995c: 0xa7ab000e  sh          $t3, 0xE($sp)
    ctx->pc = 0x12995cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 14), (uint16_t)GPR_U32(ctx, 11));
    // 0x129960: 0xafae001c  sw          $t6, 0x1C($sp)
    ctx->pc = 0x129960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 14));
    // 0x129964: 0xafad0024  sw          $t5, 0x24($sp)
    ctx->pc = 0x129964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 13));
    // 0x129968: 0xafaa0014  sw          $t2, 0x14($sp)
    ctx->pc = 0x129968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 10));
    // 0x12996c: 0xafa90000  sw          $t1, 0x0($sp)
    ctx->pc = 0x12996cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 9));
    // 0x129970: 0xafaa0008  sw          $t2, 0x8($sp)
    ctx->pc = 0x129970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 10));
    // 0x129974: 0xc04a672  jal         func_1299C8
    ctx->pc = 0x129974u;
    SET_GPR_U32(ctx, 31, 0x12997Cu);
    ctx->pc = 0x129978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129974u;
    // 0x129978: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1299C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1299C8u, 0x129974u, 0x12997Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12997Cu;
label_12997c:
    // 0x12997c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12997cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129980: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x129980u;
    {
        const bool branch_taken_0x129980 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x129984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129980u;
        // 0x129984: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129980) {
            ctx->pc = 0x129998u;
            goto label_129998;
        }
    }
    ctx->pc = 0x129988u;
    // 0x129988: 0xc048e58  jal         func_123960
    ctx->pc = 0x129988u;
    SET_GPR_U32(ctx, 31, 0x129990u);
    ctx->pc = 0x123960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123960u, 0x129988u, 0x129990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129990u;
label_129990:
    // 0x129990: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x129990u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x129994: 0x1e2880b  movn        $s1, $t7, $v0
    ctx->pc = 0x129994u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 15));
label_129998:
    // 0x129998: 0x97af000c  lhu         $t7, 0xC($sp)
    ctx->pc = 0x129998u;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x12999c: 0x31ef0040  andi        $t7, $t7, 0x40
    ctx->pc = 0x12999cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)64);
    // 0x1299a0: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1299A0u;
    {
        const bool branch_taken_0x1299a0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1299A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1299A0u;
        // 0x1299a4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1299a0) {
            ctx->pc = 0x1299B4u;
            goto label_1299b4;
        }
    }
    ctx->pc = 0x1299A8u;
    // 0x1299a8: 0x960f000c  lhu         $t7, 0xC($s0)
    ctx->pc = 0x1299a8u;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1299ac: 0x35ef0040  ori         $t7, $t7, 0x40
    ctx->pc = 0x1299acu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)64);
    // 0x1299b0: 0xa60f000c  sh          $t7, 0xC($s0)
    ctx->pc = 0x1299b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 15));
label_1299b4:
    // 0x1299b4: 0xdfb00460  ld          $s0, 0x460($sp)
    ctx->pc = 0x1299b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1120)));
    // 0x1299b8: 0xdfb10468  ld          $s1, 0x468($sp)
    ctx->pc = 0x1299b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1128)));
    // 0x1299bc: 0xdfbf0470  ld          $ra, 0x470($sp)
    ctx->pc = 0x1299bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1136)));
    // 0x1299c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1299C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1299C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1299C0u;
        // 0x1299c4: 0x27bd0480  addiu       $sp, $sp, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1299C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1299C8u;
}
