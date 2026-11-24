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

// Function: sub_00289530
// Address: 0x289530 - 0x2895b0
void sub_00289530_0x289530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00289530_0x289530");
#endif

    switch (ctx->pc) {
        case 0x289550u: goto label_289550;
        case 0x289560u: goto label_289560;
        default: break;
    }

    ctx->pc = 0x289530u;

    // 0x289530: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x289530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x289534: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x289534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x289538: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x289538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28953c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28953cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289540: 0x8e0507d0  lw          $a1, 0x7D0($s0)
    ctx->pc = 0x289540u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2000)));
    // 0x289544: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x289544u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x289548: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x289548u;
    SET_GPR_U32(ctx, 31, 0x289550u);
    ctx->pc = 0x28954Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289548u;
    // 0x28954c: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x289548u, 0x289550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289550u;
label_289550:
    // 0x289550: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x289550u;
    {
        const bool branch_taken_0x289550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x289554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289550u;
        // 0x289554: 0x24440020  addiu       $a0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289550) {
            ctx->pc = 0x2895A0u;
            goto label_2895a0;
        }
    }
    ctx->pc = 0x289558u;
    // 0x289558: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x289558u;
    SET_GPR_U32(ctx, 31, 0x289560u);
    ctx->pc = 0x28955Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289558u;
    // 0x28955c: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x289558u, 0x289560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289560u;
label_289560:
    // 0x289560: 0x3c044500  lui         $a0, 0x4500
    ctx->pc = 0x289560u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17664 << 16));
    // 0x289564: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x289564u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x289568: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x289568u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28956c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x28956cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x289570: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x289570u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x289574: 0x0  nop
    ctx->pc = 0x289574u;
    // NOP
    // 0x289578: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x289578u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x28957c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x28957cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x289580: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x289580u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x289584: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x289584u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x289588: 0x0  nop
    ctx->pc = 0x289588u;
    // NOP
    // 0x28958c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x28958cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x289590: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x289590u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x289594: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x289594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x289598: 0xa60300c2  sh          $v1, 0xC2($s0)
    ctx->pc = 0x289598u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 3));
    // 0x28959c: 0x0  nop
    ctx->pc = 0x28959cu;
    // NOP
label_2895a0:
    // 0x2895a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2895a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2895a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2895a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2895a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2895A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2895ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2895A8u;
        // 0x2895ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2895A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2895B0u;
}
