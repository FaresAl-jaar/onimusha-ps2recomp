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

// Function: sub_003CD8A0
// Address: 0x3cd8a0 - 0x3cd9ac
void sub_003CD8A0_0x3cd8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CD8A0_0x3cd8a0");
#endif

    switch (ctx->pc) {
        case 0x3cd900u: goto label_3cd900;
        case 0x3cd928u: goto label_3cd928;
        case 0x3cd950u: goto label_3cd950;
        default: break;
    }

    ctx->pc = 0x3cd8a0u;

    // 0x3cd8a0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3cd8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3cd8a4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3cd8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x3cd8a8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3cd8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x3cd8ac: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3cd8acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x3cd8b0: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x3cd8b0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd8b4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3cd8b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3cd8b8: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x3cd8b8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd8bc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3cd8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3cd8c0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x3cd8c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd8c4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3cd8c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3cd8c8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3cd8c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd8cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3cd8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3cd8d0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x3cd8d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd8d4: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x3cd8d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd8d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3cd8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3cd8dc: 0x3c08003d  lui         $t0, 0x3D
    ctx->pc = 0x3cd8dcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)61 << 16));
    // 0x3cd8e0: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x3cd8e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd8e4: 0x24040051  addiu       $a0, $zero, 0x51
    ctx->pc = 0x3cd8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x3cd8e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3cd8e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd8ec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3cd8ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3cd8f0: 0x24070570  addiu       $a3, $zero, 0x570
    ctx->pc = 0x3cd8f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1392));
    // 0x3cd8f4: 0x2508d830  addiu       $t0, $t0, -0x27D0
    ctx->pc = 0x3cd8f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957104));
    // 0x3cd8f8: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x3CD8F8u;
    SET_GPR_U32(ctx, 31, 0x3CD900u);
    ctx->pc = 0x3CD8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD8F8u;
    // 0x3cd8fc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x3CD8F8u, 0x3CD900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD900u;
label_3cd900:
    // 0x3cd900: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3cd900u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd904: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x3CD904u;
    {
        const bool branch_taken_0x3cd904 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CD908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD904u;
        // 0x3cd908: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd904) {
            ctx->pc = 0x3CD978u;
            goto label_3cd978;
        }
    }
    ctx->pc = 0x3CD90Cu;
    // 0x3cd90c: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x3cd90cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd910: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x3cd910u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd914: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x3cd914u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd918: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cd918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd91c: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x3cd91cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3cd920: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x3CD920u;
    SET_GPR_U32(ctx, 31, 0x3CD928u);
    ctx->pc = 0x3CD924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD920u;
    // 0x3cd924: 0x2406001d  addiu       $a2, $zero, 0x1D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x3CD920u, 0x3CD928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD928u;
label_3cd928:
    // 0x3cd928: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x3cd928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x3cd92c: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x3cd92cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x3cd930: 0xa6050526  sh          $a1, 0x526($s0)
    ctx->pc = 0x3cd930u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 5));
    // 0x3cd934: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3cd934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3cd938: 0xa6030528  sh          $v1, 0x528($s0)
    ctx->pc = 0x3cd938u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 3));
    // 0x3cd93c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cd93cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd940: 0xa605052a  sh          $a1, 0x52A($s0)
    ctx->pc = 0x3cd940u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 5));
    // 0x3cd944: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x3cd944u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x3cd948: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x3CD948u;
    SET_GPR_U32(ctx, 31, 0x3CD950u);
    ctx->pc = 0x3CD94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD948u;
    // 0x3cd94c: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x3CD948u, 0x3CD950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD950u;
label_3cd950:
    // 0x3cd950: 0xae000550  sw          $zero, 0x550($s0)
    ctx->pc = 0x3cd950u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 0));
    // 0x3cd954: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3cd954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3cd958: 0xae020554  sw          $v0, 0x554($s0)
    ctx->pc = 0x3cd958u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1364), GPR_U32(ctx, 2));
    // 0x3cd95c: 0xa2110558  sb          $s1, 0x558($s0)
    ctx->pc = 0x3cd95cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1368), (uint8_t)GPR_U32(ctx, 17));
    // 0x3cd960: 0xa2170559  sb          $s7, 0x559($s0)
    ctx->pc = 0x3cd960u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1369), (uint8_t)GPR_U32(ctx, 23));
    // 0x3cd964: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x3cd964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3cd968: 0xae020518  sw          $v0, 0x518($s0)
    ctx->pc = 0x3cd968u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1304), GPR_U32(ctx, 2));
    // 0x3cd96c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3CD96Cu;
    {
        const bool branch_taken_0x3cd96c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CD970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD96Cu;
        // 0x3cd970: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd96c) {
            ctx->pc = 0x3CD980u;
            goto label_3cd980;
        }
    }
    ctx->pc = 0x3CD974u;
    // 0x3cd974: 0x0  nop
    ctx->pc = 0x3cd974u;
    // NOP
label_3cd978:
    // 0x3cd978: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3cd978u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd97c: 0x0  nop
    ctx->pc = 0x3cd97cu;
    // NOP
label_3cd980:
    // 0x3cd980: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3cd980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3cd984: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3cd984u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3cd988: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3cd988u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3cd98c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3cd98cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3cd990: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3cd990u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3cd994: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3cd994u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3cd998: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3cd998u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3cd99c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3cd99cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3cd9a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3cd9a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3cd9a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3CD9A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CD9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD9A4u;
        // 0x3cd9a8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CD9A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CD9ACu;
}
