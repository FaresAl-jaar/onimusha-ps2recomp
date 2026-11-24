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

// Function: sub_002E7740
// Address: 0x2e7740 - 0x2e7824
void sub_002E7740_0x2e7740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E7740_0x2e7740");
#endif

    switch (ctx->pc) {
        case 0x2e7788u: goto label_2e7788;
        case 0x2e7798u: goto label_2e7798;
        case 0x2e77b0u: goto label_2e77b0;
        case 0x2e77e0u: goto label_2e77e0;
        case 0x2e7800u: goto label_2e7800;
        case 0x2e7810u: goto label_2e7810;
        default: break;
    }

    ctx->pc = 0x2e7740u;

    // 0x2e7740: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e7740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e7744: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e7744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7748: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e7748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e774c: 0x240600a0  addiu       $a2, $zero, 0xA0
    ctx->pc = 0x2e774cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x2e7750: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e7750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e7754: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2e7754u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2e7758: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e7758u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e775c: 0xa0800151  sb          $zero, 0x151($a0)
    ctx->pc = 0x2e775cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 337), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e7760: 0xa0800150  sb          $zero, 0x150($a0)
    ctx->pc = 0x2e7760u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 336), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e7764: 0xa4800154  sh          $zero, 0x154($a0)
    ctx->pc = 0x2e7764u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 340), (uint16_t)GPR_U32(ctx, 0));
    // 0x2e7768: 0xa4800152  sh          $zero, 0x152($a0)
    ctx->pc = 0x2e7768u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 338), (uint16_t)GPR_U32(ctx, 0));
    // 0x2e776c: 0xa480015c  sh          $zero, 0x15C($a0)
    ctx->pc = 0x2e776cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 348), (uint16_t)GPR_U32(ctx, 0));
    // 0x2e7770: 0xa480015a  sh          $zero, 0x15A($a0)
    ctx->pc = 0x2e7770u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 346), (uint16_t)GPR_U32(ctx, 0));
    // 0x2e7774: 0xa080015e  sb          $zero, 0x15E($a0)
    ctx->pc = 0x2e7774u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 350), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e7778: 0xa4800162  sh          $zero, 0x162($a0)
    ctx->pc = 0x2e7778u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 354), (uint16_t)GPR_U32(ctx, 0));
    // 0x2e777c: 0xa4800160  sh          $zero, 0x160($a0)
    ctx->pc = 0x2e777cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 352), (uint16_t)GPR_U32(ctx, 0));
    // 0x2e7780: 0xc049590  jal         func_125640
    ctx->pc = 0x2E7780u;
    SET_GPR_U32(ctx, 31, 0x2E7788u);
    ctx->pc = 0x2E7784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7780u;
    // 0x2e7784: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x2E7780u, 0x2E7788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7788u;
label_2e7788:
    // 0x2e7788: 0x260400b0  addiu       $a0, $s0, 0xB0
    ctx->pc = 0x2e7788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x2e778c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e778cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7790: 0xc049590  jal         func_125640
    ctx->pc = 0x2E7790u;
    SET_GPR_U32(ctx, 31, 0x2E7798u);
    ctx->pc = 0x2E7794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7790u;
    // 0x2e7794: 0x240600a0  addiu       $a2, $zero, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x2E7790u, 0x2E7798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7798u;
label_2e7798:
    // 0x2e7798: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x2e7798u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x2e779c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2e779cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2e77a0: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x2e77a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x2e77a4: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x2e77a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2e77a8: 0xc04cd28  jal         func_1334A0
    ctx->pc = 0x2E77A8u;
    SET_GPR_U32(ctx, 31, 0x2E77B0u);
    ctx->pc = 0x2E77ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E77A8u;
    // 0x2e77ac: 0x34461012  ori         $a2, $v0, 0x1012 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4114);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1334A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1334A0u, 0x2E77A8u, 0x2E77B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E77B0u;
label_2e77b0:
    // 0x2e77b0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2e77b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x2e77b4: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x2e77b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x2e77b8: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x2e77b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x2e77bc: 0x24842160  addiu       $a0, $a0, 0x2160
    ctx->pc = 0x2e77bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8544));
    // 0x2e77c0: 0x24427090  addiu       $v0, $v0, 0x7090
    ctx->pc = 0x2e77c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28816));
    // 0x2e77c4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2e77c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2e77c8: 0xa6000152  sh          $zero, 0x152($s0)
    ctx->pc = 0x2e77c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 338), (uint16_t)GPR_U32(ctx, 0));
    // 0x2e77cc: 0x240200dc  addiu       $v0, $zero, 0xDC
    ctx->pc = 0x2e77ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
    // 0x2e77d0: 0xa6000156  sh          $zero, 0x156($s0)
    ctx->pc = 0x2e77d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 342), (uint16_t)GPR_U32(ctx, 0));
    // 0x2e77d4: 0xa6000158  sh          $zero, 0x158($s0)
    ctx->pc = 0x2e77d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 344), (uint16_t)GPR_U32(ctx, 0));
    // 0x2e77d8: 0xc0e1a18  jal         func_386860
    ctx->pc = 0x2E77D8u;
    SET_GPR_U32(ctx, 31, 0x2E77E0u);
    ctx->pc = 0x2E77DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E77D8u;
    // 0x2e77dc: 0xa602015c  sh          $v0, 0x15C($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 348), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x386860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386860u, 0x2E77D8u, 0x2E77E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E77E0u;
label_2e77e0:
    // 0x2e77e0: 0xa2000228  sb          $zero, 0x228($s0)
    ctx->pc = 0x2e77e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 552), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e77e4: 0x26040298  addiu       $a0, $s0, 0x298
    ctx->pc = 0x2e77e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 664));
    // 0x2e77e8: 0xa2000229  sb          $zero, 0x229($s0)
    ctx->pc = 0x2e77e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 553), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e77ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e77ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e77f0: 0xa2000232  sb          $zero, 0x232($s0)
    ctx->pc = 0x2e77f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 562), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e77f4: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x2e77f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2e77f8: 0xc049590  jal         func_125640
    ctx->pc = 0x2E77F8u;
    SET_GPR_U32(ctx, 31, 0x2E7800u);
    ctx->pc = 0x2E77FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E77F8u;
    // 0x2e77fc: 0xa2000233  sb          $zero, 0x233($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 563), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x2E77F8u, 0x2E7800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7800u;
label_2e7800:
    // 0x2e7800: 0x260402e8  addiu       $a0, $s0, 0x2E8
    ctx->pc = 0x2e7800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 744));
    // 0x2e7804: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e7804u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7808: 0xc049590  jal         func_125640
    ctx->pc = 0x2E7808u;
    SET_GPR_U32(ctx, 31, 0x2E7810u);
    ctx->pc = 0x2E780Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7808u;
    // 0x2e780c: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x2E7808u, 0x2E7810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7810u;
label_2e7810:
    // 0x2e7810: 0xae000278  sw          $zero, 0x278($s0)
    ctx->pc = 0x2e7810u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 632), GPR_U32(ctx, 0));
    // 0x2e7814: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e7814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e7818: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e7818u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e781c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E781Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E7820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E781Cu;
        // 0x2e7820: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E781Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E7824u;
}
