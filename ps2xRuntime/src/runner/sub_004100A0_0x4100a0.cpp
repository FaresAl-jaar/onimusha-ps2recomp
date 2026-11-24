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

// Function: sub_004100A0
// Address: 0x4100a0 - 0x41010c
void sub_004100A0_0x4100a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004100A0_0x4100a0");
#endif

    switch (ctx->pc) {
        case 0x4100a0u: goto label_4100a0;
        case 0x4100a4u: goto label_4100a4;
        case 0x4100a8u: goto label_4100a8;
        case 0x4100acu: goto label_4100ac;
        case 0x4100b0u: goto label_4100b0;
        case 0x4100b4u: goto label_4100b4;
        case 0x4100b8u: goto label_4100b8;
        case 0x4100bcu: goto label_4100bc;
        case 0x4100c0u: goto label_4100c0;
        case 0x4100c4u: goto label_4100c4;
        case 0x4100c8u: goto label_4100c8;
        case 0x4100ccu: goto label_4100cc;
        case 0x4100d0u: goto label_4100d0;
        case 0x4100d4u: goto label_4100d4;
        case 0x4100d8u: goto label_4100d8;
        case 0x4100dcu: goto label_4100dc;
        case 0x4100e0u: goto label_4100e0;
        case 0x4100e4u: goto label_4100e4;
        case 0x4100e8u: goto label_4100e8;
        case 0x4100ecu: goto label_4100ec;
        case 0x4100f0u: goto label_4100f0;
        case 0x4100f4u: goto label_4100f4;
        case 0x4100f8u: goto label_4100f8;
        case 0x4100fcu: goto label_4100fc;
        case 0x410100u: goto label_410100;
        case 0x410104u: goto label_410104;
        case 0x410108u: goto label_410108;
        default: break;
    }

    ctx->pc = 0x4100a0u;

label_4100a0:
    // 0x4100a0: 0x1d07  .word       0x00001D07                   # srav        $v1, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4100a0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_4100a4:
    // 0x4100a4: 0x8328  .word       0x00008328                   # mfsa        $s0 # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4100a4u;
    SET_GPR_U32(ctx, 16, ctx->sa);
label_4100a8:
    // 0x4100a8: 0x1e07  .word       0x00001E07                   # srav        $v1, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4100a8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_4100ac:
    // 0x4100ac: 0x846c  .word       0x0000846C                   # dadd        $s0, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4100acu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, r); }
label_4100b0:
    // 0x4100b0: 0x1f07  .word       0x00001F07                   # srav        $v1, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4100b0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_4100b4:
    // 0x4100b4: 0x886c  .word       0x0000886C                   # dadd        $s1, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4100b4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 17, r); }
label_4100b8:
    // 0x4100b8: 0x2007  srav        $a0, $zero, $zero
    ctx->pc = 0x4100b8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_4100bc:
    // 0x4100bc: 0x88c4  .word       0x000088C4                   # sllv        $s1, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4100bcu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_4100c0:
    // 0x4100c0: 0x2107  .word       0x00002107                   # srav        $a0, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4100c0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_4100c4:
    // 0x4100c4: 0x892c  .word       0x0000892C                   # dadd        $s1, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4100c4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 17, r); }
label_4100c8:
    // 0x4100c8: 0x2207  .word       0x00002207                   # srav        $a0, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4100c8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_4100cc:
    // 0x4100cc: 0x8ab0  tge         $zero, $zero, 554
    ctx->pc = 0x4100ccu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4100d0:
    // 0x4100d0: 0x2307  .word       0x00002307                   # srav        $a0, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4100d0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_4100d4:
    // 0x4100d4: 0x8b24  .word       0x00008B24                   # and         $s1, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4100d4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_4100d8:
    // 0x4100d8: 0x2407  .word       0x00002407                   # srav        $a0, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4100d8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_4100dc:
    // 0x4100dc: 0x8c18  .word       0x00008C18                   # mult        $s1, $zero, $zero # 00000400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4100dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_4100e0:
    // 0x4100e0: 0x2507  .word       0x00002507                   # srav        $a0, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4100e0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_4100e4:
    // 0x4100e4: 0x8ca4  .word       0x00008CA4                   # and         $s1, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4100e4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_4100e8:
    // 0x4100e8: 0x2607  .word       0x00002607                   # srav        $a0, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4100e8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_4100ec:
    // 0x4100ec: 0x8f2c  .word       0x00008F2C                   # dadd        $s1, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4100ecu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 17, r); }
label_4100f0:
    // 0x4100f0: 0x2707  .word       0x00002707                   # srav        $a0, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4100f0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_4100f4:
    // 0x4100f4: 0x8fec  .word       0x00008FEC                   # dadd        $s1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4100f4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 17, r); }
label_4100f8:
    // 0x4100f8: 0x2807  srav        $a1, $zero, $zero
    ctx->pc = 0x4100f8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_4100fc:
    // 0x4100fc: 0x9174  teq         $zero, $zero, 581
    ctx->pc = 0x4100fcu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_410100:
    // 0x410100: 0x2907  .word       0x00002907                   # srav        $a1, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x410100u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_410104:
    // 0x410104: 0x9208  .word       0x00009208                   # jr          $zero # 00009200 <InstrIdType: CPU_SPECIAL>
label_410108:
    if (ctx->pc == 0x410108u) {
        ctx->pc = 0x410108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410104u;
        // 0x410108: 0x8  jr          $zero (Delay Slot)
        // JR $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x41010Cu;
        goto label_fallthrough_0x410104;
    }
    ctx->pc = 0x410104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x410108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410104u;
        // 0x410108: 0x8  jr          $zero (Delay Slot)
        // JR $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x410104u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x410104:
    ctx->pc = 0x41010Cu;
}
