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

// Function: sub_002AD230
// Address: 0x2ad230 - 0x2ad2c8
void sub_002AD230_0x2ad230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AD230_0x2ad230");
#endif

    switch (ctx->pc) {
        case 0x2ad25cu: goto label_2ad25c;
        default: break;
    }

    ctx->pc = 0x2ad230u;

    // 0x2ad230: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ad230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ad234: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ad234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ad238: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ad238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ad23c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ad23cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ad240: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ad240u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad244: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x2ad244u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2ad248: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2ad248u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad24c: 0x7c820870  sq          $v0, 0x870($a0)
    ctx->pc = 0x2ad24cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 2160), GPR_VEC(ctx, 2));
    // 0x2ad250: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2ad250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad254: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x2AD254u;
    SET_GPR_U32(ctx, 31, 0x2AD25Cu);
    ctx->pc = 0x2AD258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD254u;
    // 0x2ad258: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x2AD254u, 0x2AD25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD25Cu;
label_2ad25c:
    // 0x2ad25c: 0x3c044500  lui         $a0, 0x4500
    ctx->pc = 0x2ad25cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17664 << 16));
    // 0x2ad260: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x2ad260u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x2ad264: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x2ad264u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ad268: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2ad268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2ad26c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ad26cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ad270: 0x0  nop
    ctx->pc = 0x2ad270u;
    // NOP
    // 0x2ad274: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2ad274u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2ad278: 0x240400b6  addiu       $a0, $zero, 0xB6
    ctx->pc = 0x2ad278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 182));
    // 0x2ad27c: 0x240300b1  addiu       $v1, $zero, 0xB1
    ctx->pc = 0x2ad27cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 177));
    // 0x2ad280: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2ad280u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2ad284: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ad284u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2ad288: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x2ad288u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2ad28c: 0x0  nop
    ctx->pc = 0x2ad28cu;
    // NOP
    // 0x2ad290: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x2ad290u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2ad294: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x2ad294u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x2ad298: 0x30a50fff  andi        $a1, $a1, 0xFFF
    ctx->pc = 0x2ad298u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
    // 0x2ad29c: 0xa62508a0  sh          $a1, 0x8A0($s1)
    ctx->pc = 0x2ad29cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2208), (uint16_t)GPR_U32(ctx, 5));
    // 0x2ad2a0: 0xae2008b0  sw          $zero, 0x8B0($s1)
    ctx->pc = 0x2ad2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2224), GPR_U32(ctx, 0));
    // 0x2ad2a4: 0xae2008b4  sw          $zero, 0x8B4($s1)
    ctx->pc = 0x2ad2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2228), GPR_U32(ctx, 0));
    // 0x2ad2a8: 0xae3008c8  sw          $s0, 0x8C8($s1)
    ctx->pc = 0x2ad2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2248), GPR_U32(ctx, 16));
    // 0x2ad2ac: 0xa2240822  sb          $a0, 0x822($s1)
    ctx->pc = 0x2ad2acu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2082), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ad2b0: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x2ad2b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ad2b4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ad2b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ad2b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ad2b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ad2bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ad2bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ad2c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD2C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD2C0u;
        // 0x2ad2c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD2C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AD2C8u;
}
