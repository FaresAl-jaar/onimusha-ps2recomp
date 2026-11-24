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

// Function: sub_002E72F0
// Address: 0x2e72f0 - 0x2e73d8
void sub_002E72F0_0x2e72f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E72F0_0x2e72f0");
#endif

    switch (ctx->pc) {
        case 0x2e732cu: goto label_2e732c;
        case 0x2e737cu: goto label_2e737c;
        default: break;
    }

    ctx->pc = 0x2e72f0u;

    // 0x2e72f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e72f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e72f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e72f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e72f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e72f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e72fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e72fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e7300: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e7300u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7304: 0x90840821  lbu         $a0, 0x821($a0)
    ctx->pc = 0x2e7304u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x2e7308: 0x1083002b  beq         $a0, $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x2E7308u;
    {
        const bool branch_taken_0x2e7308 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e7308) {
            ctx->pc = 0x2E73B8u;
            goto label_2e73b8;
        }
    }
    ctx->pc = 0x2E7310u;
    // 0x2e7310: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E7310u;
    {
        const bool branch_taken_0x2e7310 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7310) {
            ctx->pc = 0x2E7320u;
            goto label_2e7320;
        }
    }
    ctx->pc = 0x2E7318u;
    // 0x2e7318: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2E7318u;
    {
        const bool branch_taken_0x2e7318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7318) {
            ctx->pc = 0x2E73C8u;
            goto label_2e73c8;
        }
    }
    ctx->pc = 0x2E7320u;
label_2e7320:
    // 0x2e7320: 0xc60d07a8  lwc1        $f13, 0x7A8($s0)
    ctx->pc = 0x2e7320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2e7324: 0xc047b88  jal         func_11EE20
    ctx->pc = 0x2E7324u;
    SET_GPR_U32(ctx, 31, 0x2E732Cu);
    ctx->pc = 0x2E7328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7324u;
    // 0x2e7328: 0xc60c07a0  lwc1        $f12, 0x7A0($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE20u, 0x2E7324u, 0x2E732Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E732Cu;
label_2e732c:
    // 0x2e732c: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x2e732cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x2e7330: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2e7330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x2e7334: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2e7334u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e7338: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2e7338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2e733c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e733cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e7340: 0x0  nop
    ctx->pc = 0x2e7340u;
    // NOP
    // 0x2e7344: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2e7344u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2e7348: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2e7348u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2e734c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e734cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2e7350: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2e7350u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2e7354: 0x0  nop
    ctx->pc = 0x2e7354u;
    // NOP
    // 0x2e7358: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2e7358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2e735c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2e735cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2e7360: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x2e7360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x2e7364: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2e7364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2e7368: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2e7368u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2e736c: 0x24420800  addiu       $v0, $v0, 0x800
    ctx->pc = 0x2e736cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    // 0x2e7370: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x2e7370u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2e7374: 0xc0967cc  jal         func_259F30
    ctx->pc = 0x2E7374u;
    SET_GPR_U32(ctx, 31, 0x2E737Cu);
    ctx->pc = 0x2E7378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7374u;
    // 0x2e7378: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259F30u, 0x2E7374u, 0x2E737Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E737Cu;
label_2e737c:
    // 0x2e737c: 0xa60200c2  sh          $v0, 0xC2($s0)
    ctx->pc = 0x2e737cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e7380: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2e7380u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e7384: 0x9208083b  lbu         $t0, 0x83B($s0)
    ctx->pc = 0x2e7384u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2107)));
    // 0x2e7388: 0x24060088  addiu       $a2, $zero, 0x88
    ctx->pc = 0x2e7388u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    // 0x2e738c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2e738cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e7390: 0x3c048004  lui         $a0, 0x8004
    ctx->pc = 0x2e7390u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32772 << 16));
    // 0x2e7394: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e7394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e7398: 0xa208083c  sb          $t0, 0x83C($s0)
    ctx->pc = 0x2e7398u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2108), (uint8_t)GPR_U32(ctx, 8));
    // 0x2e739c: 0xa207083b  sb          $a3, 0x83B($s0)
    ctx->pc = 0x2e739cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2107), (uint8_t)GPR_U32(ctx, 7));
    // 0x2e73a0: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x2e73a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e73a4: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x2e73a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e73a8: 0xa60607f2  sh          $a2, 0x7F2($s0)
    ctx->pc = 0x2e73a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 6));
    // 0x2e73ac: 0xa20507f5  sb          $a1, 0x7F5($s0)
    ctx->pc = 0x2e73acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 5));
    // 0x2e73b0: 0xae0407ec  sw          $a0, 0x7EC($s0)
    ctx->pc = 0x2e73b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 4));
    // 0x2e73b4: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x2e73b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
label_2e73b8:
    // 0x2e73b8: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x2e73b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x2e73bc: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E73BCu;
    {
        const bool branch_taken_0x2e73bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E73C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E73BCu;
        // 0x2e73c0: 0x2403009a  addiu       $v1, $zero, 0x9A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e73bc) {
            ctx->pc = 0x2E73C8u;
            goto label_2e73c8;
        }
    }
    ctx->pc = 0x2E73C4u;
    // 0x2e73c4: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x2e73c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
label_2e73c8:
    // 0x2e73c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e73c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e73cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e73ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e73d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E73D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E73D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E73D0u;
        // 0x2e73d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E73D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E73D8u;
}
