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

// Function: sub_003401C0
// Address: 0x3401c0 - 0x34027c
void sub_003401C0_0x3401c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003401C0_0x3401c0");
#endif

    switch (ctx->pc) {
        case 0x34020cu: goto label_34020c;
        default: break;
    }

    ctx->pc = 0x3401c0u;

    // 0x3401c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3401c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3401c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3401c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3401c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3401c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3401cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3401ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3401d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3401d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3401d4: 0x8c8206ac  lw          $v0, 0x6AC($a0)
    ctx->pc = 0x3401d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1708)));
    // 0x3401d8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3401d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3401dc: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x3401dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x3401e0: 0xac8206ac  sw          $v0, 0x6AC($a0)
    ctx->pc = 0x3401e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1708), GPR_U32(ctx, 2));
    // 0x3401e4: 0x8c8206b4  lw          $v0, 0x6B4($a0)
    ctx->pc = 0x3401e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1716)));
    // 0x3401e8: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x3401e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x3401ec: 0xac8206b4  sw          $v0, 0x6B4($a0)
    ctx->pc = 0x3401ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1716), GPR_U32(ctx, 2));
    // 0x3401f0: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x3401f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3401f4: 0x7c820870  sq          $v0, 0x870($a0)
    ctx->pc = 0x3401f4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 2160), GPR_VEC(ctx, 2));
    // 0x3401f8: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x3401f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3401fc: 0x7c820890  sq          $v0, 0x890($a0)
    ctx->pc = 0x3401fcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 2192), GPR_VEC(ctx, 2));
    // 0x340200: 0x26250870  addiu       $a1, $s1, 0x870
    ctx->pc = 0x340200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2160));
    // 0x340204: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x340204u;
    SET_GPR_U32(ctx, 31, 0x34020Cu);
    ctx->pc = 0x340208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340204u;
    // 0x340208: 0x26240890  addiu       $a0, $s1, 0x890 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x340204u, 0x34020Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34020Cu;
label_34020c:
    // 0x34020c: 0x3c044500  lui         $a0, 0x4500
    ctx->pc = 0x34020cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17664 << 16));
    // 0x340210: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x340210u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x340214: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x340214u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x340218: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x340218u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x34021c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x34021cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x340220: 0x0  nop
    ctx->pc = 0x340220u;
    // NOP
    // 0x340224: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x340224u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x340228: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x340228u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x34022c: 0x2484f330  addiu       $a0, $a0, -0xCD0
    ctx->pc = 0x34022cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964016));
    // 0x340230: 0x240300b1  addiu       $v1, $zero, 0xB1
    ctx->pc = 0x340230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 177));
    // 0x340234: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x340234u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x340238: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x340238u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x34023c: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x34023cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x340240: 0x0  nop
    ctx->pc = 0x340240u;
    // NOP
    // 0x340244: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x340244u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x340248: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x340248u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x34024c: 0x30a50fff  andi        $a1, $a1, 0xFFF
    ctx->pc = 0x34024cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
    // 0x340250: 0xa62508a0  sh          $a1, 0x8A0($s1)
    ctx->pc = 0x340250u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2208), (uint16_t)GPR_U32(ctx, 5));
    // 0x340254: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x340254u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x340258: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x340258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x34025c: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x34025cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x340260: 0xa2240822  sb          $a0, 0x822($s1)
    ctx->pc = 0x340260u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2082), (uint8_t)GPR_U32(ctx, 4));
    // 0x340264: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x340264u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x340268: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x340268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34026c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34026cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x340270: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x340270u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x340274: 0x3e00008  jr          $ra
    ctx->pc = 0x340274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x340278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340274u;
        // 0x340278: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34027Cu;
}
