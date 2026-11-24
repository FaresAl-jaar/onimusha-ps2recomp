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

// Function: sub_001CF710
// Address: 0x1cf710 - 0x1cf7f4
void sub_001CF710_0x1cf710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CF710_0x1cf710");
#endif

    switch (ctx->pc) {
        case 0x1cf7e4u: goto label_1cf7e4;
        default: break;
    }

    ctx->pc = 0x1cf710u;

    // 0x1cf710: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cf710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cf714: 0x3c034020  lui         $v1, 0x4020
    ctx->pc = 0x1cf714u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16416 << 16));
    // 0x1cf718: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cf718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cf71c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1cf71cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1cf720: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x1cf720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cf724: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1cf724u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x1cf728: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cf728u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cf72c: 0x0  nop
    ctx->pc = 0x1cf72cu;
    // NOP
    // 0x1cf730: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1cf730u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1cf734: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1cf734u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cf738: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1CF738u;
    {
        const bool branch_taken_0x1cf738 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cf738) {
            ctx->pc = 0x1CF750u;
            goto label_1cf750;
        }
    }
    ctx->pc = 0x1CF740u;
    // 0x1cf740: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1cf740u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1cf744: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x1cf744u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1cf748: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1CF748u;
    {
        const bool branch_taken_0x1cf748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF748u;
        // 0x1cf74c: 0x90853022  lbu         $a1, 0x3022($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12322)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf748) {
            ctx->pc = 0x1CF76Cu;
            goto label_1cf76c;
        }
    }
    ctx->pc = 0x1CF750u;
label_1cf750:
    // 0x1cf750: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1cf750u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1cf754: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1cf754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1cf758: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1cf758u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1cf75c: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x1cf75cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1cf760: 0x0  nop
    ctx->pc = 0x1cf760u;
    // NOP
    // 0x1cf764: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1cf764u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1cf768: 0x90853022  lbu         $a1, 0x3022($a0)
    ctx->pc = 0x1cf768u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12322)));
label_1cf76c:
    // 0x1cf76c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1cf76cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cf770: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CF770u;
    {
        const bool branch_taken_0x1cf770 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1cf770) {
            ctx->pc = 0x1CF780u;
            goto label_1cf780;
        }
    }
    ctx->pc = 0x1CF778u;
    // 0x1cf778: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1CF778u;
    {
        const bool branch_taken_0x1cf778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf778) {
            ctx->pc = 0x1CF7E8u;
            goto label_1cf7e8;
        }
    }
    ctx->pc = 0x1CF780u;
label_1cf780:
    // 0x1cf780: 0x8c823028  lw          $v0, 0x3028($a0)
    ctx->pc = 0x1cf780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12328)));
    // 0x1cf784: 0x46082b  sltu        $at, $v0, $a2
    ctx->pc = 0x1cf784u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1cf788: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CF788u;
    {
        const bool branch_taken_0x1cf788 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf788) {
            ctx->pc = 0x1CF798u;
            goto label_1cf798;
        }
    }
    ctx->pc = 0x1CF790u;
    // 0x1cf790: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1cf790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1cf794: 0xac823028  sw          $v0, 0x3028($a0)
    ctx->pc = 0x1cf794u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12328), GPR_U32(ctx, 2));
label_1cf798:
    // 0x1cf798: 0x8c823028  lw          $v0, 0x3028($a0)
    ctx->pc = 0x1cf798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12328)));
    // 0x1cf79c: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x1cf79cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1cf7a0: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1cf7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x1cf7a4: 0x46001b  divu        $zero, $v0, $a2
    ctx->pc = 0x1cf7a4u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1cf7a8: 0x0  nop
    ctx->pc = 0x1cf7a8u;
    // NOP
    // 0x1cf7ac: 0x0  nop
    ctx->pc = 0x1cf7acu;
    // NOP
    // 0x1cf7b0: 0x1012  mflo        $v0
    ctx->pc = 0x1cf7b0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1cf7b4: 0x2c410081  sltiu       $at, $v0, 0x81
    ctx->pc = 0x1cf7b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x1cf7b8: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CF7B8u;
    {
        const bool branch_taken_0x1cf7b8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cf7b8) {
            ctx->pc = 0x1CF7C8u;
            goto label_1cf7c8;
        }
    }
    ctx->pc = 0x1CF7C0u;
    // 0x1cf7c0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1cf7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1cf7c4: 0x0  nop
    ctx->pc = 0x1cf7c4u;
    // NOP
label_1cf7c8:
    // 0x1cf7c8: 0x90853023  lbu         $a1, 0x3023($a0)
    ctx->pc = 0x1cf7c8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12323)));
    // 0x1cf7cc: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x1cf7ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1cf7d0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1cf7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1cf7d4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1cf7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1cf7d8: 0x8c443030  lw          $a0, 0x3030($v0)
    ctx->pc = 0x1cf7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12336)));
    // 0x1cf7dc: 0xc073b80  jal         func_1CEE00
    ctx->pc = 0x1CF7DCu;
    SET_GPR_U32(ctx, 31, 0x1CF7E4u);
    ctx->pc = 0x1CF7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF7DCu;
    // 0x1cf7e0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEE00u, 0x1CF7DCu, 0x1CF7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF7E4u;
label_1cf7e4:
    // 0x1cf7e4: 0x0  nop
    ctx->pc = 0x1cf7e4u;
    // NOP
label_1cf7e8:
    // 0x1cf7e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cf7e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf7ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF7ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF7ECu;
        // 0x1cf7f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF7ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF7F4u;
}
