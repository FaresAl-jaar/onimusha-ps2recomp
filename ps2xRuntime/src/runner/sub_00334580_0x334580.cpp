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

// Function: sub_00334580
// Address: 0x334580 - 0x3346b0
void sub_00334580_0x334580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00334580_0x334580");
#endif

    switch (ctx->pc) {
        case 0x3345d8u: goto label_3345d8;
        case 0x334600u: goto label_334600;
        case 0x334660u: goto label_334660;
        case 0x334674u: goto label_334674;
        default: break;
    }

    ctx->pc = 0x334580u;

    // 0x334580: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x334580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x334584: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x334584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x334588: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x334588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x33458c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x33458cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x334590: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x334590u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334594: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x334594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x334598: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x334598u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33459c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x33459cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3345a0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3345a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3345a4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3345a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3345a8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x3345a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3345ac: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x3345acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3345b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3345b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3345b4: 0x3c080033  lui         $t0, 0x33
    ctx->pc = 0x3345b4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
    // 0x3345b8: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x3345b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3345bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3345bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3345c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3345c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3345c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3345c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3345c8: 0x240706f0  addiu       $a3, $zero, 0x6F0
    ctx->pc = 0x3345c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1776));
    // 0x3345cc: 0x25084520  addiu       $t0, $t0, 0x4520
    ctx->pc = 0x3345ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 17696));
    // 0x3345d0: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x3345D0u;
    SET_GPR_U32(ctx, 31, 0x3345D8u);
    ctx->pc = 0x3345D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3345D0u;
    // 0x3345d4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x3345D0u, 0x3345D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3345D8u;
label_3345d8:
    // 0x3345d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3345d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3345dc: 0x12000028  beqz        $s0, . + 4 + (0x28 << 2)
    ctx->pc = 0x3345DCu;
    {
        const bool branch_taken_0x3345dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3345E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3345DCu;
        // 0x3345e0: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3345dc) {
            ctx->pc = 0x334680u;
            goto label_334680;
        }
    }
    ctx->pc = 0x3345E4u;
    // 0x3345e4: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x3345e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3345e8: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x3345e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3345ec: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x3345ecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3345f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3345f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3345f4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x3345f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3345f8: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x3345F8u;
    SET_GPR_U32(ctx, 31, 0x334600u);
    ctx->pc = 0x3345FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3345F8u;
    // 0x3345fc: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x3345F8u, 0x334600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334600u;
label_334600:
    // 0x334600: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x334600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x334604: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x334604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x334608: 0xa6030526  sh          $v1, 0x526($s0)
    ctx->pc = 0x334608u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 3));
    // 0x33460c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33460cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x334610: 0xa600052a  sh          $zero, 0x52A($s0)
    ctx->pc = 0x334610u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 0));
    // 0x334614: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x334614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334618: 0xa6000528  sh          $zero, 0x528($s0)
    ctx->pc = 0x334618u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 0));
    // 0x33461c: 0xa2020520  sb          $v0, 0x520($s0)
    ctx->pc = 0x33461cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    // 0x334620: 0xa20006e0  sb          $zero, 0x6E0($s0)
    ctx->pc = 0x334620u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1760), (uint8_t)GPR_U32(ctx, 0));
    // 0x334624: 0xa21106e1  sb          $s1, 0x6E1($s0)
    ctx->pc = 0x334624u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1761), (uint8_t)GPR_U32(ctx, 17));
    // 0x334628: 0xae000590  sw          $zero, 0x590($s0)
    ctx->pc = 0x334628u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1424), GPR_U32(ctx, 0));
    // 0x33462c: 0xa6000594  sh          $zero, 0x594($s0)
    ctx->pc = 0x33462cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1428), (uint16_t)GPR_U32(ctx, 0));
    // 0x334630: 0xae0005e0  sw          $zero, 0x5E0($s0)
    ctx->pc = 0x334630u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1504), GPR_U32(ctx, 0));
    // 0x334634: 0xa60005e4  sh          $zero, 0x5E4($s0)
    ctx->pc = 0x334634u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1508), (uint16_t)GPR_U32(ctx, 0));
    // 0x334638: 0xae000630  sw          $zero, 0x630($s0)
    ctx->pc = 0x334638u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1584), GPR_U32(ctx, 0));
    // 0x33463c: 0xa6000634  sh          $zero, 0x634($s0)
    ctx->pc = 0x33463cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1588), (uint16_t)GPR_U32(ctx, 0));
    // 0x334640: 0xae000680  sw          $zero, 0x680($s0)
    ctx->pc = 0x334640u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1664), GPR_U32(ctx, 0));
    // 0x334644: 0xa6000684  sh          $zero, 0x684($s0)
    ctx->pc = 0x334644u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1668), (uint16_t)GPR_U32(ctx, 0));
    // 0x334648: 0xae0006d0  sw          $zero, 0x6D0($s0)
    ctx->pc = 0x334648u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1744), GPR_U32(ctx, 0));
    // 0x33464c: 0xa60006d4  sh          $zero, 0x6D4($s0)
    ctx->pc = 0x33464cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1748), (uint16_t)GPR_U32(ctx, 0));
    // 0x334650: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x334650u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x334654: 0x7e020090  sq          $v0, 0x90($s0)
    ctx->pc = 0x334654u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 2));
    // 0x334658: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x334658u;
    SET_GPR_U32(ctx, 31, 0x334660u);
    ctx->pc = 0x33465Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334658u;
    // 0x33465c: 0xae000094  sw          $zero, 0x94($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x334658u, 0x334660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334660u;
label_334660:
    // 0x334660: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x334660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x334664: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x334664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x334668: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x334668u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x33466c: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x33466Cu;
    SET_GPR_U32(ctx, 31, 0x334674u);
    ctx->pc = 0x334670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33466Cu;
    // 0x334670: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x33466Cu, 0x334674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334674u;
label_334674:
    // 0x334674: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x334674u;
    {
        const bool branch_taken_0x334674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334674u;
        // 0x334678: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334674) {
            ctx->pc = 0x334688u;
            goto label_334688;
        }
    }
    ctx->pc = 0x33467Cu;
    // 0x33467c: 0x0  nop
    ctx->pc = 0x33467cu;
    // NOP
label_334680:
    // 0x334680: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x334680u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334684: 0x0  nop
    ctx->pc = 0x334684u;
    // NOP
label_334688:
    // 0x334688: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x334688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x33468c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x33468cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x334690: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x334690u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x334694: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x334694u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x334698: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x334698u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33469c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33469cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3346a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3346a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3346a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3346a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3346a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3346A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3346ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3346A8u;
        // 0x3346ac: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3346A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3346B0u;
}
