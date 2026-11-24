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

// Function: sub_0033E240
// Address: 0x33e240 - 0x33e49c
void sub_0033E240_0x33e240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033E240_0x33e240");
#endif

    switch (ctx->pc) {
        case 0x33e264u: goto label_33e264;
        case 0x33e2b0u: goto label_33e2b0;
        case 0x33e2c4u: goto label_33e2c4;
        case 0x33e2d0u: goto label_33e2d0;
        case 0x33e2f0u: goto label_33e2f0;
        case 0x33e488u: goto label_33e488;
        default: break;
    }

    ctx->pc = 0x33e240u;

    // 0x33e240: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x33e240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x33e244: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x33e244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x33e248: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33e248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33e24c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x33e24cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e250: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33e250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33e254: 0x8e2507c0  lw          $a1, 0x7C0($s1)
    ctx->pc = 0x33e254u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1984)));
    // 0x33e258: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x33e258u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x33e25c: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x33E25Cu;
    SET_GPR_U32(ctx, 31, 0x33E264u);
    ctx->pc = 0x33E260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E25Cu;
    // 0x33e260: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x33E25Cu, 0x33E264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E264u;
label_33e264:
    // 0x33e264: 0x10400080  beqz        $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x33E264u;
    {
        const bool branch_taken_0x33e264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33e264) {
            ctx->pc = 0x33E468u;
            goto label_33e468;
        }
    }
    ctx->pc = 0x33E26Cu;
    // 0x33e26c: 0x8e2306c8  lw          $v1, 0x6C8($s1)
    ctx->pc = 0x33e26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1736)));
    // 0x33e270: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x33e270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x33e274: 0x1060007c  beqz        $v1, . + 4 + (0x7C << 2)
    ctx->pc = 0x33E274u;
    {
        const bool branch_taken_0x33e274 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33e274) {
            ctx->pc = 0x33E468u;
            goto label_33e468;
        }
    }
    ctx->pc = 0x33E27Cu;
    // 0x33e27c: 0x90430733  lbu         $v1, 0x733($v0)
    ctx->pc = 0x33e27cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1843)));
    // 0x33e280: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x33e280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x33e284: 0x8c46004c  lw          $a2, 0x4C($v0)
    ctx->pc = 0x33e284u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x33e288: 0x92302af2  lbu         $s0, 0x2AF2($s1)
    ctx->pc = 0x33e288u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10994)));
    // 0x33e28c: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x33e28cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x33e290: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x33e290u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x33e294: 0x90a50730  lbu         $a1, 0x730($a1)
    ctx->pc = 0x33e294u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1840)));
    // 0x33e298: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33e298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33e29c: 0x8cc30094  lw          $v1, 0x94($a2)
    ctx->pc = 0x33e29cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 148)));
    // 0x33e2a0: 0x24460700  addiu       $a2, $v0, 0x700
    ctx->pc = 0x33e2a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1792));
    // 0x33e2a4: 0x51180  sll         $v0, $a1, 6
    ctx->pc = 0x33e2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x33e2a8: 0xc041442  jal         func_105108
    ctx->pc = 0x33E2A8u;
    SET_GPR_U32(ctx, 31, 0x33E2B0u);
    ctx->pc = 0x33E2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E2A8u;
    // 0x33e2ac: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x33E2A8u, 0x33E2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E2B0u;
label_33e2b0:
    // 0x33e2b0: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x33e2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x33e2b4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x33e2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x33e2b8: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x33e2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x33e2bc: 0xc0967c0  jal         func_259F00
    ctx->pc = 0x33E2BCu;
    SET_GPR_U32(ctx, 31, 0x33E2C4u);
    ctx->pc = 0x33E2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E2BCu;
    // 0x33e2c0: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259F00u, 0x33E2BCu, 0x33E2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E2C4u;
label_33e2c4:
    // 0x33e2c4: 0xc6212afc  lwc1        $f1, 0x2AFC($s1)
    ctx->pc = 0x33e2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 11004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33e2c8: 0xc09681c  jal         func_25A070
    ctx->pc = 0x33E2C8u;
    SET_GPR_U32(ctx, 31, 0x33E2D0u);
    ctx->pc = 0x33E2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E2C8u;
    // 0x33e2cc: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A070u, 0x33E2C8u, 0x33E2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E2D0u;
label_33e2d0:
    // 0x33e2d0: 0x3c03bf5f  lui         $v1, 0xBF5F
    ctx->pc = 0x33e2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48991 << 16));
    // 0x33e2d4: 0x3c023f20  lui         $v0, 0x3F20
    ctx->pc = 0x33e2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16160 << 16));
    // 0x33e2d8: 0x346366f4  ori         $v1, $v1, 0x66F4
    ctx->pc = 0x33e2d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26356);
    // 0x33e2dc: 0x3442d97c  ori         $v0, $v0, 0xD97C
    ctx->pc = 0x33e2dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55676);
    // 0x33e2e0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x33e2e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x33e2e4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x33e2e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x33e2e8: 0xc096960  jal         func_25A580
    ctx->pc = 0x33E2E8u;
    SET_GPR_U32(ctx, 31, 0x33E2F0u);
    ctx->pc = 0x33E2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E2E8u;
    // 0x33e2ec: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A580u, 0x33E2E8u, 0x33E2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E2F0u;
label_33e2f0:
    // 0x33e2f0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x33e2f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33e2f4: 0x0  nop
    ctx->pc = 0x33e2f4u;
    // NOP
    // 0x33e2f8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x33e2f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33e2fc: 0x4500002a  bc1f        . + 4 + (0x2A << 2)
    ctx->pc = 0x33E2FCu;
    {
        const bool branch_taken_0x33e2fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x33E300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E2FCu;
        // 0x33e300: 0xe6202af8  swc1        $f0, 0x2AF8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 11000), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e2fc) {
            ctx->pc = 0x33E3A8u;
            goto label_33e3a8;
        }
    }
    ctx->pc = 0x33E304u;
    // 0x33e304: 0x92232af0  lbu         $v1, 0x2AF0($s1)
    ctx->pc = 0x33e304u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10992)));
    // 0x33e308: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x33e308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33e30c: 0x10660020  beq         $v1, $a2, . + 4 + (0x20 << 2)
    ctx->pc = 0x33E30Cu;
    {
        const bool branch_taken_0x33e30c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x33E310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E30Cu;
        // 0x33e310: 0x320800ff  andi        $t0, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e30c) {
            ctx->pc = 0x33E390u;
            goto label_33e390;
        }
    }
    ctx->pc = 0x33E314u;
    // 0x33e314: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x33e314u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x33e318: 0x83880  sll         $a3, $t0, 2
    ctx->pc = 0x33e318u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x33e31c: 0x2463f090  addiu       $v1, $v1, -0xF70
    ctx->pc = 0x33e31cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963344));
    // 0x33e320: 0x672021  addu        $a0, $v1, $a3
    ctx->pc = 0x33e320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x33e324: 0x8e250054  lw          $a1, 0x54($s1)
    ctx->pc = 0x33e324u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x33e328: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x33e328u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x33e32c: 0x8c890000  lw          $t1, 0x0($a0)
    ctx->pc = 0x33e32cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33e330: 0x2463f0c0  addiu       $v1, $v1, -0xF40
    ctx->pc = 0x33e330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963392));
    // 0x33e334: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x33e334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x33e338: 0x8c6a0000  lw          $t2, 0x0($v1)
    ctx->pc = 0x33e338u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33e33c: 0x94a700c4  lhu         $a3, 0xC4($a1)
    ctx->pc = 0x33e33cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 196)));
    // 0x33e340: 0x81840  sll         $v1, $t0, 1
    ctx->pc = 0x33e340u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x33e344: 0x682021  addu        $a0, $v1, $t0
    ctx->pc = 0x33e344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x33e348: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x33e348u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x33e34c: 0x2463f061  addiu       $v1, $v1, -0xF9F
    ctx->pc = 0x33e34cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963297));
    // 0x33e350: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33e350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33e354: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x33e354u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33e358: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x33e358u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x33e35c: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x33e35cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x33e360: 0x2463f060  addiu       $v1, $v1, -0xFA0
    ctx->pc = 0x33e360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963296));
    // 0x33e364: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x33e364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33e368: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x33e368u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33e36c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x33e36cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x33e370: 0x1231825  or          $v1, $t1, $v1
    ctx->pc = 0x33e370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x33e374: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x33e374u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x33e378: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x33e378u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x33e37c: 0xa22707f4  sb          $a3, 0x7F4($s1)
    ctx->pc = 0x33e37cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 7));
    // 0x33e380: 0xa62407f2  sh          $a0, 0x7F2($s1)
    ctx->pc = 0x33e380u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 4));
    // 0x33e384: 0xa22a07f5  sb          $t2, 0x7F5($s1)
    ctx->pc = 0x33e384u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 10));
    // 0x33e388: 0xae2307ec  sw          $v1, 0x7EC($s1)
    ctx->pc = 0x33e388u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 3));
    // 0x33e38c: 0xa2262af0  sb          $a2, 0x2AF0($s1)
    ctx->pc = 0x33e38cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 10992), (uint8_t)GPR_U32(ctx, 6));
label_33e390:
    // 0x33e390: 0x3c03bf92  lui         $v1, 0xBF92
    ctx->pc = 0x33e390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49042 << 16));
    // 0x33e394: 0x3463ad5c  ori         $v1, $v1, 0xAD5C
    ctx->pc = 0x33e394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)44380);
    // 0x33e398: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x33e398u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33e39c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x33E39Cu;
    {
        const bool branch_taken_0x33e39c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E39Cu;
        // 0x33e3a0: 0x46000802  mul.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e39c) {
            ctx->pc = 0x33E450u;
            goto label_33e450;
        }
    }
    ctx->pc = 0x33E3A4u;
    // 0x33e3a4: 0x0  nop
    ctx->pc = 0x33e3a4u;
    // NOP
label_33e3a8:
    // 0x33e3a8: 0x92232af0  lbu         $v1, 0x2AF0($s1)
    ctx->pc = 0x33e3a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10992)));
    // 0x33e3ac: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x33e3acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33e3b0: 0x10660021  beq         $v1, $a2, . + 4 + (0x21 << 2)
    ctx->pc = 0x33E3B0u;
    {
        const bool branch_taken_0x33e3b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x33E3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E3B0u;
        // 0x33e3b4: 0x320800ff  andi        $t0, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e3b0) {
            ctx->pc = 0x33E438u;
            goto label_33e438;
        }
    }
    ctx->pc = 0x33E3B8u;
    // 0x33e3b8: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x33e3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x33e3bc: 0x83880  sll         $a3, $t0, 2
    ctx->pc = 0x33e3bcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x33e3c0: 0x2463f090  addiu       $v1, $v1, -0xF70
    ctx->pc = 0x33e3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963344));
    // 0x33e3c4: 0x672021  addu        $a0, $v1, $a3
    ctx->pc = 0x33e3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x33e3c8: 0x8e250054  lw          $a1, 0x54($s1)
    ctx->pc = 0x33e3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x33e3cc: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x33e3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x33e3d0: 0x8c890000  lw          $t1, 0x0($a0)
    ctx->pc = 0x33e3d0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33e3d4: 0x2463f0c0  addiu       $v1, $v1, -0xF40
    ctx->pc = 0x33e3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963392));
    // 0x33e3d8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x33e3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x33e3dc: 0x8c6a0000  lw          $t2, 0x0($v1)
    ctx->pc = 0x33e3dcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33e3e0: 0x94a700c4  lhu         $a3, 0xC4($a1)
    ctx->pc = 0x33e3e0u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 196)));
    // 0x33e3e4: 0x81840  sll         $v1, $t0, 1
    ctx->pc = 0x33e3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x33e3e8: 0x682021  addu        $a0, $v1, $t0
    ctx->pc = 0x33e3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x33e3ec: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x33e3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x33e3f0: 0x2463f062  addiu       $v1, $v1, -0xF9E
    ctx->pc = 0x33e3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963298));
    // 0x33e3f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33e3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33e3f8: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x33e3f8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33e3fc: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x33e3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x33e400: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x33e400u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x33e404: 0x2463f060  addiu       $v1, $v1, -0xFA0
    ctx->pc = 0x33e404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963296));
    // 0x33e408: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x33e408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33e40c: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x33e40cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33e410: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x33e410u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x33e414: 0x1231825  or          $v1, $t1, $v1
    ctx->pc = 0x33e414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x33e418: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x33e418u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x33e41c: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x33e41cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x33e420: 0xa22707f4  sb          $a3, 0x7F4($s1)
    ctx->pc = 0x33e420u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 7));
    // 0x33e424: 0xa62407f2  sh          $a0, 0x7F2($s1)
    ctx->pc = 0x33e424u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 4));
    // 0x33e428: 0xa22a07f5  sb          $t2, 0x7F5($s1)
    ctx->pc = 0x33e428u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 10));
    // 0x33e42c: 0xae2307ec  sw          $v1, 0x7EC($s1)
    ctx->pc = 0x33e42cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 3));
    // 0x33e430: 0xa2262af0  sb          $a2, 0x2AF0($s1)
    ctx->pc = 0x33e430u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 10992), (uint8_t)GPR_U32(ctx, 6));
    // 0x33e434: 0x0  nop
    ctx->pc = 0x33e434u;
    // NOP
label_33e438:
    // 0x33e438: 0x3c033fcb  lui         $v1, 0x3FCB
    ctx->pc = 0x33e438u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16331 << 16));
    // 0x33e43c: 0x3463b7e4  ori         $v1, $v1, 0xB7E4
    ctx->pc = 0x33e43cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)47076);
    // 0x33e440: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x33e440u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33e444: 0x0  nop
    ctx->pc = 0x33e444u;
    // NOP
    // 0x33e448: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x33e448u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x33e44c: 0x0  nop
    ctx->pc = 0x33e44cu;
    // NOP
label_33e450:
    // 0x33e450: 0x8e2407ec  lw          $a0, 0x7EC($s1)
    ctx->pc = 0x33e450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2028)));
    // 0x33e454: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x33e454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x33e458: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x33e458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x33e45c: 0xae2307ec  sw          $v1, 0x7EC($s1)
    ctx->pc = 0x33e45cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 3));
    // 0x33e460: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x33E460u;
    {
        const bool branch_taken_0x33e460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E460u;
        // 0x33e464: 0xe62007e8  swc1        $f0, 0x7E8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2024), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e460) {
            ctx->pc = 0x33E488u;
            goto label_33e488;
        }
    }
    ctx->pc = 0x33E468u;
label_33e468:
    // 0x33e468: 0x92232af0  lbu         $v1, 0x2AF0($s1)
    ctx->pc = 0x33e468u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10992)));
    // 0x33e46c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x33E46Cu;
    {
        const bool branch_taken_0x33e46c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33e46c) {
            ctx->pc = 0x33E488u;
            goto label_33e488;
        }
    }
    ctx->pc = 0x33E474u;
    // 0x33e474: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x33e474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x33e478: 0x92252af2  lbu         $a1, 0x2AF2($s1)
    ctx->pc = 0x33e478u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10994)));
    // 0x33e47c: 0x944600c4  lhu         $a2, 0xC4($v0)
    ctx->pc = 0x33e47cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x33e480: 0xc0cf7d0  jal         func_33DF40
    ctx->pc = 0x33E480u;
    SET_GPR_U32(ctx, 31, 0x33E488u);
    ctx->pc = 0x33E484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E480u;
    // 0x33e484: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33DF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33DF40u, 0x33E480u, 0x33E488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E488u;
label_33e488:
    // 0x33e488: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x33e488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33e48c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33e48cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33e490: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33e490u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33e494: 0x3e00008  jr          $ra
    ctx->pc = 0x33E494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33E498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E494u;
        // 0x33e498: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33E49Cu;
}
