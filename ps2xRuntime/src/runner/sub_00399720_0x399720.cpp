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

// Function: sub_00399720
// Address: 0x399720 - 0x399e5c
void sub_00399720_0x399720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00399720_0x399720");
#endif

    switch (ctx->pc) {
        case 0x399748u: goto label_399748;
        case 0x399760u: goto label_399760;
        case 0x399768u: goto label_399768;
        case 0x399778u: goto label_399778;
        case 0x399790u: goto label_399790;
        case 0x3997a0u: goto label_3997a0;
        case 0x3997ccu: goto label_3997cc;
        case 0x3998f0u: goto label_3998f0;
        case 0x399900u: goto label_399900;
        case 0x399940u: goto label_399940;
        case 0x399954u: goto label_399954;
        case 0x399964u: goto label_399964;
        case 0x399994u: goto label_399994;
        case 0x3999c0u: goto label_3999c0;
        case 0x399a50u: goto label_399a50;
        case 0x399a90u: goto label_399a90;
        case 0x399ac8u: goto label_399ac8;
        case 0x399b00u: goto label_399b00;
        case 0x399b38u: goto label_399b38;
        case 0x399b58u: goto label_399b58;
        case 0x399b9cu: goto label_399b9c;
        case 0x399bd4u: goto label_399bd4;
        case 0x399c18u: goto label_399c18;
        case 0x399c50u: goto label_399c50;
        case 0x399c90u: goto label_399c90;
        case 0x399cc8u: goto label_399cc8;
        case 0x399d08u: goto label_399d08;
        case 0x399d40u: goto label_399d40;
        case 0x399d98u: goto label_399d98;
        case 0x399da4u: goto label_399da4;
        case 0x399db0u: goto label_399db0;
        case 0x399dbcu: goto label_399dbc;
        case 0x399e2cu: goto label_399e2c;
        case 0x399e34u: goto label_399e34;
        default: break;
    }

    ctx->pc = 0x399720u;

    // 0x399720: 0x27bdfe30  addiu       $sp, $sp, -0x1D0
    ctx->pc = 0x399720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966832));
    // 0x399724: 0x24041df0  addiu       $a0, $zero, 0x1DF0
    ctx->pc = 0x399724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7664));
    // 0x399728: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x399728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x39972c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x39972cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x399730: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x399730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x399734: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x399734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x399738: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x399738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x39973c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39973cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x399740: 0xc0d8e98  jal         func_363A60
    ctx->pc = 0x399740u;
    SET_GPR_U32(ctx, 31, 0x399748u);
    ctx->pc = 0x399744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399740u;
    // 0x399744: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363A60u, 0x399740u, 0x399748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399748u;
label_399748:
    // 0x399748: 0xaf828c50  sw          $v0, -0x73B0($gp)
    ctx->pc = 0x399748u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937680), GPR_U32(ctx, 2));
    // 0x39974c: 0x8f848c50  lw          $a0, -0x73B0($gp)
    ctx->pc = 0x39974cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x399750: 0x108001b9  beqz        $a0, . + 4 + (0x1B9 << 2)
    ctx->pc = 0x399750u;
    {
        const bool branch_taken_0x399750 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x399754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399750u;
        // 0x399754: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399750) {
            ctx->pc = 0x399E38u;
            goto label_399e38;
        }
    }
    ctx->pc = 0x399758u;
    // 0x399758: 0xc049590  jal         func_125640
    ctx->pc = 0x399758u;
    SET_GPR_U32(ctx, 31, 0x399760u);
    ctx->pc = 0x39975Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399758u;
    // 0x39975c: 0x24061df0  addiu       $a2, $zero, 0x1DF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x399758u, 0x399760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399760u;
label_399760:
    // 0x399760: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x399760u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399764: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x399764u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_399768:
    // 0x399768: 0x8f828c50  lw          $v0, -0x73B0($gp)
    ctx->pc = 0x399768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x39976c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x39976cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x399770: 0xc0f020c  jal         func_3C0830
    ctx->pc = 0x399770u;
    SET_GPR_U32(ctx, 31, 0x399778u);
    ctx->pc = 0x399774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399770u;
    // 0x399774: 0x24440b5c  addiu       $a0, $v0, 0xB5C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2908));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0830u, 0x399770u, 0x399778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399778u;
label_399778:
    // 0x399778: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x399778u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x39977c: 0x2a2200e2  slti        $v0, $s1, 0xE2
    ctx->pc = 0x39977cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)226) ? 1 : 0);
    // 0x399780: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x399780u;
    {
        const bool branch_taken_0x399780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x399784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399780u;
        // 0x399784: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399780) {
            ctx->pc = 0x399768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_399768;
        }
    }
    ctx->pc = 0x399788u;
    // 0x399788: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x399788u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39978c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x39978cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_399790:
    // 0x399790: 0x8f828c50  lw          $v0, -0x73B0($gp)
    ctx->pc = 0x399790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x399794: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x399794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x399798: 0xc0f03f0  jal         func_3C0FC0
    ctx->pc = 0x399798u;
    SET_GPR_U32(ctx, 31, 0x3997A0u);
    ctx->pc = 0x39979Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399798u;
    // 0x39979c: 0x24440780  addiu       $a0, $v0, 0x780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0FC0u, 0x399798u, 0x3997A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3997A0u;
label_3997a0:
    // 0x3997a0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3997a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3997a4: 0x2a220008  slti        $v0, $s1, 0x8
    ctx->pc = 0x3997a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x3997a8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3997A8u;
    {
        const bool branch_taken_0x3997a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3997ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3997A8u;
        // 0x3997ac: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3997a8) {
            ctx->pc = 0x399790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_399790;
        }
    }
    ctx->pc = 0x3997B0u;
    // 0x3997b0: 0x8f828c50  lw          $v0, -0x73B0($gp)
    ctx->pc = 0x3997b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x3997b4: 0x240600e2  addiu       $a2, $zero, 0xE2
    ctx->pc = 0x3997b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 226));
    // 0x3997b8: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x3997b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3997bc: 0x24440b44  addiu       $a0, $v0, 0xB44
    ctx->pc = 0x3997bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2884));
    // 0x3997c0: 0x24450b5c  addiu       $a1, $v0, 0xB5C
    ctx->pc = 0x3997c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2908));
    // 0x3997c4: 0xc0f0740  jal         func_3C1D00
    ctx->pc = 0x3997C4u;
    SET_GPR_U32(ctx, 31, 0x3997CCu);
    ctx->pc = 0x3997C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3997C4u;
    // 0x3997c8: 0x24470980  addiu       $a3, $v0, 0x980 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C1D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C1D00u, 0x3997C4u, 0x3997CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3997CCu;
label_3997cc:
    // 0x3997cc: 0xc7838078  lwc1        $f3, -0x7F88($gp)
    ctx->pc = 0x3997ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3997d0: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x3997d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x3997d4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3997d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3997d8: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3997d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3997dc: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x3997dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x3997e0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3997e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3997e4: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x3997e4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x3997e8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3997e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3997ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3997ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3997f0: 0x0  nop
    ctx->pc = 0x3997f0u;
    // NOP
    // 0x3997f4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3997f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3997f8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3997f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3997fc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3997FCu;
    {
        const bool branch_taken_0x3997fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3997fc) {
            ctx->pc = 0x399814u;
            goto label_399814;
        }
    }
    ctx->pc = 0x399804u;
    // 0x399804: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x399804u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x399808: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x399808u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x39980c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x39980Cu;
    {
        const bool branch_taken_0x39980c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x399810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39980Cu;
        // 0x399810: 0x3c0243b4  lui         $v0, 0x43B4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39980c) {
            ctx->pc = 0x399830u;
            goto label_399830;
        }
    }
    ctx->pc = 0x399814u;
label_399814:
    // 0x399814: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x399814u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x399818: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x399818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x39981c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x39981cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x399820: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x399820u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x399824: 0x0  nop
    ctx->pc = 0x399824u;
    // NOP
    // 0x399828: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x399828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x39982c: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x39982cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
label_399830:
    // 0x399830: 0xa7a301a0  sh          $v1, 0x1A0($sp)
    ctx->pc = 0x399830u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 416), (uint16_t)GPR_U32(ctx, 3));
    // 0x399834: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x399834u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x399838: 0x0  nop
    ctx->pc = 0x399838u;
    // NOP
    // 0x39983c: 0x46030082  mul.s       $f2, $f0, $f3
    ctx->pc = 0x39983cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x399840: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x399840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x399844: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x399844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x399848: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x399848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x39984c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x39984cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x399850: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x399850u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x399854: 0x0  nop
    ctx->pc = 0x399854u;
    // NOP
    // 0x399858: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x399858u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x39985c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x39985cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x399860: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x399860u;
    {
        const bool branch_taken_0x399860 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x399860) {
            ctx->pc = 0x399878u;
            goto label_399878;
        }
    }
    ctx->pc = 0x399868u;
    // 0x399868: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x399868u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x39986c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x39986cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x399870: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x399870u;
    {
        const bool branch_taken_0x399870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x399874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399870u;
        // 0x399874: 0x3c024040  lui         $v0, 0x4040 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399870) {
            ctx->pc = 0x399894u;
            goto label_399894;
        }
    }
    ctx->pc = 0x399878u;
label_399878:
    // 0x399878: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x399878u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x39987c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x39987cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x399880: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x399880u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x399884: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x399884u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x399888: 0x0  nop
    ctx->pc = 0x399888u;
    // NOP
    // 0x39988c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x39988cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x399890: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x399890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_399894:
    // 0x399894: 0xa7a301a2  sh          $v1, 0x1A2($sp)
    ctx->pc = 0x399894u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 418), (uint16_t)GPR_U32(ctx, 3));
    // 0x399898: 0xafa201a4  sw          $v0, 0x1A4($sp)
    ctx->pc = 0x399898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 2));
    // 0x39989c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x39989cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3998a0: 0x3c023cfb  lui         $v0, 0x3CFB
    ctx->pc = 0x3998a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15611 << 16));
    // 0x3998a4: 0xafa301a8  sw          $v1, 0x1A8($sp)
    ctx->pc = 0x3998a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 3));
    // 0x3998a8: 0x344253d2  ori         $v0, $v0, 0x53D2
    ctx->pc = 0x3998a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21458);
    // 0x3998ac: 0xafa301bc  sw          $v1, 0x1BC($sp)
    ctx->pc = 0x3998acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 444), GPR_U32(ctx, 3));
    // 0x3998b0: 0xafa201ac  sw          $v0, 0x1AC($sp)
    ctx->pc = 0x3998b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 2));
    // 0x3998b4: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x3998b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x3998b8: 0x3c023e05  lui         $v0, 0x3E05
    ctx->pc = 0x3998b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15877 << 16));
    // 0x3998bc: 0xafa301b4  sw          $v1, 0x1B4($sp)
    ctx->pc = 0x3998bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 3));
    // 0x3998c0: 0x34421eb8  ori         $v0, $v0, 0x1EB8
    ctx->pc = 0x3998c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7864);
    // 0x3998c4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3998c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3998c8: 0xafa201b0  sw          $v0, 0x1B0($sp)
    ctx->pc = 0x3998c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 2));
    // 0x3998cc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3998ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3998d0: 0x3c023bfb  lui         $v0, 0x3BFB
    ctx->pc = 0x3998d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15355 << 16));
    // 0x3998d4: 0x27b10174  addiu       $s1, $sp, 0x174
    ctx->pc = 0x3998d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 372));
    // 0x3998d8: 0x344253d2  ori         $v0, $v0, 0x53D2
    ctx->pc = 0x3998d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21458);
    // 0x3998dc: 0x27b0017c  addiu       $s0, $sp, 0x17C
    ctx->pc = 0x3998dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 380));
    // 0x3998e0: 0xafa201b8  sw          $v0, 0x1B8($sp)
    ctx->pc = 0x3998e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 2));
    // 0x3998e4: 0x27b50180  addiu       $s5, $sp, 0x180
    ctx->pc = 0x3998e4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x3998e8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3998e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3998ec: 0xa7a201c0  sh          $v0, 0x1C0($sp)
    ctx->pc = 0x3998ecu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 448), (uint16_t)GPR_U32(ctx, 2));
label_3998f0:
    // 0x3998f0: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x3998f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x3998f4: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x3998f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x3998f8: 0xc049522  jal         func_125488
    ctx->pc = 0x3998F8u;
    SET_GPR_U32(ctx, 31, 0x399900u);
    ctx->pc = 0x3998FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3998F8u;
    // 0x3998fc: 0x24060024  addiu       $a2, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x3998F8u, 0x399900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399900u;
label_399900:
    // 0x399900: 0x16600009  bnez        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x399900u;
    {
        const bool branch_taken_0x399900 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x399904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399900u;
        // 0x399904: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399900) {
            ctx->pc = 0x399928u;
            goto label_399928;
        }
    }
    ctx->pc = 0x399908u;
    // 0x399908: 0x3c023bfb  lui         $v0, 0x3BFB
    ctx->pc = 0x399908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15355 << 16));
    // 0x39990c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x39990cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x399910: 0x344253d2  ori         $v0, $v0, 0x53D2
    ctx->pc = 0x399910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21458);
    // 0x399914: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x399914u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x399918: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x399918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x39991c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x39991cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x399920: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x399920u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x399924: 0x0  nop
    ctx->pc = 0x399924u;
    // NOP
label_399928:
    // 0x399928: 0x8f828c50  lw          $v0, -0x73B0($gp)
    ctx->pc = 0x399928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x39992c: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x39992cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x399930: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x399930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x399934: 0x24540380  addiu       $s4, $v0, 0x380
    ctx->pc = 0x399934u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 896));
    // 0x399938: 0xc0f0570  jal         func_3C15C0
    ctx->pc = 0x399938u;
    SET_GPR_U32(ctx, 31, 0x399940u);
    ctx->pc = 0x39993Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399938u;
    // 0x39993c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C15C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C15C0u, 0x399938u, 0x399940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399940u;
label_399940:
    // 0x399940: 0x8f828c50  lw          $v0, -0x73B0($gp)
    ctx->pc = 0x399940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x399944: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x399944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399948: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x399948u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x39994c: 0xc0f05e0  jal         func_3C1780
    ctx->pc = 0x39994Cu;
    SET_GPR_U32(ctx, 31, 0x399954u);
    ctx->pc = 0x399950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39994Cu;
    // 0x399950: 0x24450780  addiu       $a1, $v0, 0x780 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C1780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C1780u, 0x39994Cu, 0x399954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399954u;
label_399954:
    // 0x399954: 0x8f828c50  lw          $v0, -0x73B0($gp)
    ctx->pc = 0x399954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x399958: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x399958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39995c: 0xc0f05e4  jal         func_3C1790
    ctx->pc = 0x39995Cu;
    SET_GPR_U32(ctx, 31, 0x399964u);
    ctx->pc = 0x399960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39995Cu;
    // 0x399960: 0x24450b44  addiu       $a1, $v0, 0xB44 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2884));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C1790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C1790u, 0x39995Cu, 0x399964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399964u;
label_399964:
    // 0x399964: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x399964u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x399968: 0x2a620004  slti        $v0, $s3, 0x4
    ctx->pc = 0x399968u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x39996c: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x39996Cu;
    {
        const bool branch_taken_0x39996c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x399970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39996Cu;
        // 0x399970: 0x26520100  addiu       $s2, $s2, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39996c) {
            ctx->pc = 0x3998F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3998f0;
        }
    }
    ctx->pc = 0x399974u;
    // 0x399974: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x399974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x399978: 0x8f828c50  lw          $v0, -0x73B0($gp)
    ctx->pc = 0x399978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x39997c: 0x8c23b870  lw          $v1, -0x4790($at)
    ctx->pc = 0x39997cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x80B870u));
    // 0x399980: 0xac431da8  sw          $v1, 0x1DA8($v0)
    ctx->pc = 0x399980u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7592), GPR_U32(ctx, 3));
    // 0x399984: 0x8f858c50  lw          $a1, -0x73B0($gp)
    ctx->pc = 0x399984u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x399988: 0x8ca41da8  lw          $a0, 0x1DA8($a1)
    ctx->pc = 0x399988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 7592)));
    // 0x39998c: 0xc0d6a60  jal         func_35A980
    ctx->pc = 0x39998Cu;
    SET_GPR_U32(ctx, 31, 0x399994u);
    ctx->pc = 0x399990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39998Cu;
    // 0x399990: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A980u, 0x39998Cu, 0x399994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399994u;
label_399994:
    // 0x399994: 0x8f888c50  lw          $t0, -0x73B0($gp)
    ctx->pc = 0x399994u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x399998: 0x8d021da8  lw          $v0, 0x1DA8($t0)
    ctx->pc = 0x399998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 7592)));
    // 0x39999c: 0x94420068  lhu         $v0, 0x68($v0)
    ctx->pc = 0x39999cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x3999a0: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x3999a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3999a4: 0x10200028  beqz        $at, . + 4 + (0x28 << 2)
    ctx->pc = 0x3999A4u;
    {
        const bool branch_taken_0x3999a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3999A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3999A4u;
        // 0x3999a8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3999a4) {
            ctx->pc = 0x399A48u;
            goto label_399a48;
        }
    }
    ctx->pc = 0x3999ACu;
    // 0x3999ac: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x3999acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x3999b0: 0x34058001  ori         $a1, $zero, 0x8001
    ctx->pc = 0x3999b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x3999b4: 0x34068002  ori         $a2, $zero, 0x8002
    ctx->pc = 0x3999b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32770);
    // 0x3999b8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3999b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3999bc: 0x34078005  ori         $a3, $zero, 0x8005
    ctx->pc = 0x3999bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32773);
label_3999c0:
    // 0x3999c0: 0x25227fff  addiu       $v0, $t1, 0x7FFF
    ctx->pc = 0x3999c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 32767));
    // 0x3999c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3999c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3999c8: 0x1047000f  beq         $v0, $a3, . + 4 + (0xF << 2)
    ctx->pc = 0x3999C8u;
    {
        const bool branch_taken_0x3999c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x3999c8) {
            ctx->pc = 0x399A08u;
            goto label_399a08;
        }
    }
    ctx->pc = 0x3999D0u;
    // 0x3999d0: 0x1046000b  beq         $v0, $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x3999D0u;
    {
        const bool branch_taken_0x3999d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x3999d0) {
            ctx->pc = 0x399A00u;
            goto label_399a00;
        }
    }
    ctx->pc = 0x3999D8u;
    // 0x3999d8: 0x10450007  beq         $v0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3999D8u;
    {
        const bool branch_taken_0x3999d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x3999d8) {
            ctx->pc = 0x3999F8u;
            goto label_3999f8;
        }
    }
    ctx->pc = 0x3999E0u;
    // 0x3999e0: 0x10440003  beq         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3999E0u;
    {
        const bool branch_taken_0x3999e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x3999e0) {
            ctx->pc = 0x3999F0u;
            goto label_3999f0;
        }
    }
    ctx->pc = 0x3999E8u;
    // 0x3999e8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3999E8u;
    {
        const bool branch_taken_0x3999e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3999e8) {
            ctx->pc = 0x399A28u;
            goto label_399a28;
        }
    }
    ctx->pc = 0x3999F0u;
label_3999f0:
    // 0x3999f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3999F0u;
    {
        const bool branch_taken_0x3999f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3999F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3999F0u;
        // 0x3999f4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3999f0) {
            ctx->pc = 0x399A10u;
            goto label_399a10;
        }
    }
    ctx->pc = 0x3999F8u;
label_3999f8:
    // 0x3999f8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3999F8u;
    {
        const bool branch_taken_0x3999f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3999FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3999F8u;
        // 0x3999fc: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3999f8) {
            ctx->pc = 0x399A10u;
            goto label_399a10;
        }
    }
    ctx->pc = 0x399A00u;
label_399a00:
    // 0x399a00: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x399A00u;
    {
        const bool branch_taken_0x399a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x399A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399A00u;
        // 0x399a04: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399a00) {
            ctx->pc = 0x399A10u;
            goto label_399a10;
        }
    }
    ctx->pc = 0x399A08u;
label_399a08:
    // 0x399a08: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x399a08u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x399a0c: 0x0  nop
    ctx->pc = 0x399a0cu;
    // NOP
label_399a10:
    // 0x399a10: 0xa1040  sll         $v0, $t2, 1
    ctx->pc = 0x399a10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x399a14: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x399a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x399a18: 0xa4491db0  sh          $t1, 0x1DB0($v0)
    ctx->pc = 0x399a18u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 7600), (uint16_t)GPR_U32(ctx, 9));
    // 0x399a1c: 0x8f828c50  lw          $v0, -0x73B0($gp)
    ctx->pc = 0x399a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x399a20: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x399a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x399a24: 0xa0431dac  sb          $v1, 0x1DAC($v0)
    ctx->pc = 0x399a24u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7596), (uint8_t)GPR_U32(ctx, 3));
label_399a28:
    // 0x399a28: 0x8f888c50  lw          $t0, -0x73B0($gp)
    ctx->pc = 0x399a28u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x399a2c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x399a2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x399a30: 0x8d021da8  lw          $v0, 0x1DA8($t0)
    ctx->pc = 0x399a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 7592)));
    // 0x399a34: 0x94420068  lhu         $v0, 0x68($v0)
    ctx->pc = 0x399a34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x399a38: 0x122102a  slt         $v0, $t1, $v0
    ctx->pc = 0x399a38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x399a3c: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x399A3Cu;
    {
        const bool branch_taken_0x399a3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x399a3c) {
            ctx->pc = 0x3999C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3999c0;
        }
    }
    ctx->pc = 0x399A44u;
    // 0x399a44: 0x0  nop
    ctx->pc = 0x399a44u;
    // NOP
label_399a48:
    // 0x399a48: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x399a48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399a4c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x399a4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_399a50:
    // 0x399a50: 0x8f828c50  lw          $v0, -0x73B0($gp)
    ctx->pc = 0x399a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x399a54: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x399a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x399a58: 0x1640000d  bnez        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x399A58u;
    {
        const bool branch_taken_0x399a58 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x399A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399A58u;
        // 0x399a5c: 0x24500380  addiu       $s0, $v0, 0x380 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 896));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399a58) {
            ctx->pc = 0x399A90u;
            goto label_399a90;
        }
    }
    ctx->pc = 0x399A60u;
    // 0x399a60: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x399a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x399a64: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x399a64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x399a68: 0x2442c8a0  addiu       $v0, $v0, -0x3760
    ctx->pc = 0x399a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953120));
    // 0x399a6c: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x399a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x399a70: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x399a70u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x65C8A0u));
    // 0x399a74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x399a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399a78: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x399a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x399a7c: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x399a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x399a80: 0x2442c890  addiu       $v0, $v0, -0x3770
    ctx->pc = 0x399a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953104));
    // 0x399a84: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x399a84u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x65C890u));
    // 0x399a88: 0xc0f05bc  jal         func_3C16F0
    ctx->pc = 0x399A88u;
    SET_GPR_U32(ctx, 31, 0x399A90u);
    ctx->pc = 0x399A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399A88u;
    // 0x399a8c: 0x7ca20000  sq          $v0, 0x0($a1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C16F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C16F0u, 0x399A88u, 0x399A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399A90u;
label_399a90:
    // 0x399a90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x399a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x399a94: 0x1642000c  bne         $s2, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x399A94u;
    {
        const bool branch_taken_0x399a94 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x399A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399A94u;
        // 0x399a98: 0x3c020066  lui         $v0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399a94) {
            ctx->pc = 0x399AC8u;
            goto label_399ac8;
        }
    }
    ctx->pc = 0x399A9Cu;
    // 0x399a9c: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x399a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x399aa0: 0x2442c8c0  addiu       $v0, $v0, -0x3740
    ctx->pc = 0x399aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953152));
    // 0x399aa4: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x399aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x399aa8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x399aa8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x399aac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x399aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399ab0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x399ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x399ab4: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x399ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x399ab8: 0x2442c8b0  addiu       $v0, $v0, -0x3750
    ctx->pc = 0x399ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953136));
    // 0x399abc: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x399abcu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x65C8B0u));
    // 0x399ac0: 0xc0f05bc  jal         func_3C16F0
    ctx->pc = 0x399AC0u;
    SET_GPR_U32(ctx, 31, 0x399AC8u);
    ctx->pc = 0x399AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399AC0u;
    // 0x399ac4: 0x7ca20000  sq          $v0, 0x0($a1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C16F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C16F0u, 0x399AC0u, 0x399AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399AC8u;
label_399ac8:
    // 0x399ac8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x399ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x399acc: 0x1642000c  bne         $s2, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x399ACCu;
    {
        const bool branch_taken_0x399acc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x399AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399ACCu;
        // 0x399ad0: 0x3c020066  lui         $v0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399acc) {
            ctx->pc = 0x399B00u;
            goto label_399b00;
        }
    }
    ctx->pc = 0x399AD4u;
    // 0x399ad4: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x399ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x399ad8: 0x2442c8e0  addiu       $v0, $v0, -0x3720
    ctx->pc = 0x399ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953184));
    // 0x399adc: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x399adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x399ae0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x399ae0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x399ae4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x399ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399ae8: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x399ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x399aec: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x399aecu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x399af0: 0x2442c8d0  addiu       $v0, $v0, -0x3730
    ctx->pc = 0x399af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953168));
    // 0x399af4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x399af4u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x65C8D0u));
    // 0x399af8: 0xc0f05bc  jal         func_3C16F0
    ctx->pc = 0x399AF8u;
    SET_GPR_U32(ctx, 31, 0x399B00u);
    ctx->pc = 0x399AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399AF8u;
    // 0x399afc: 0x7ca20000  sq          $v0, 0x0($a1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C16F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C16F0u, 0x399AF8u, 0x399B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399B00u;
label_399b00:
    // 0x399b00: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x399b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x399b04: 0x1642000c  bne         $s2, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x399B04u;
    {
        const bool branch_taken_0x399b04 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x399B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399B04u;
        // 0x399b08: 0x3c020066  lui         $v0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399b04) {
            ctx->pc = 0x399B38u;
            goto label_399b38;
        }
    }
    ctx->pc = 0x399B0Cu;
    // 0x399b0c: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x399b0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x399b10: 0x2442c900  addiu       $v0, $v0, -0x3700
    ctx->pc = 0x399b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953216));
    // 0x399b14: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x399b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x399b18: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x399b18u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x399b1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x399b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399b20: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x399b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x399b24: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x399b24u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x399b28: 0x2442c8f0  addiu       $v0, $v0, -0x3710
    ctx->pc = 0x399b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953200));
    // 0x399b2c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x399b2cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x65C8F0u));
    // 0x399b30: 0xc0f05bc  jal         func_3C16F0
    ctx->pc = 0x399B30u;
    SET_GPR_U32(ctx, 31, 0x399B38u);
    ctx->pc = 0x399B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399B30u;
    // 0x399b34: 0x7ca20000  sq          $v0, 0x0($a1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C16F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C16F0u, 0x399B30u, 0x399B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399B38u;
label_399b38:
    // 0x399b38: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x399b38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x399b3c: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x399b3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x399b40: 0x1440ffc3  bnez        $v0, . + 4 + (-0x3D << 2)
    ctx->pc = 0x399B40u;
    {
        const bool branch_taken_0x399b40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x399B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399B40u;
        // 0x399b44: 0x26310100  addiu       $s1, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399b40) {
            ctx->pc = 0x399A50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_399a50;
        }
    }
    ctx->pc = 0x399B48u;
    // 0x399b48: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x399b48u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399b4c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x399b4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399b50: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x399b50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399b54: 0x0  nop
    ctx->pc = 0x399b54u;
    // NOP
label_399b58:
    // 0x399b58: 0x8f838c50  lw          $v1, -0x73B0($gp)
    ctx->pc = 0x399b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x399b5c: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x399b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x399b60: 0x1660001d  bnez        $s3, . + 4 + (0x1D << 2)
    ctx->pc = 0x399B60u;
    {
        const bool branch_taken_0x399b60 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x399B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399B60u;
        // 0x399b64: 0x24500380  addiu       $s0, $v0, 0x380 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 896));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399b60) {
            ctx->pc = 0x399BD8u;
            goto label_399bd8;
        }
    }
    ctx->pc = 0x399B68u;
    // 0x399b68: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x399b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x399b6c: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x399b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x399b70: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x399b70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x399b74: 0x24471d04  addiu       $a3, $v0, 0x1D04
    ctx->pc = 0x399b74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 7428));
    // 0x399b78: 0x2463c910  addiu       $v1, $v1, -0x36F0
    ctx->pc = 0x399b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953232));
    // 0x399b7c: 0x3c023bc9  lui         $v0, 0x3BC9
    ctx->pc = 0x399b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15305 << 16));
    // 0x399b80: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x399b80u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x65C910u));
    // 0x399b84: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x399b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x399b88: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x399b88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x399b8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x399b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399b90: 0x2406ff9c  addiu       $a2, $zero, -0x64
    ctx->pc = 0x399b90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
    // 0x399b94: 0xc0f05f0  jal         func_3C17C0
    ctx->pc = 0x399B94u;
    SET_GPR_U32(ctx, 31, 0x399B9Cu);
    ctx->pc = 0x399B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399B94u;
    // 0x399b98: 0x7ca30000  sq          $v1, 0x0($a1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C17C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C17C0u, 0x399B94u, 0x399B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399B9Cu;
label_399b9c:
    // 0x399b9c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x399b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x399ba0: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x399ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x399ba4: 0x2442c920  addiu       $v0, $v0, -0x36E0
    ctx->pc = 0x399ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953248));
    // 0x399ba8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x399ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399bac: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x399bacu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x65C920u));
    // 0x399bb0: 0x2406ff9c  addiu       $a2, $zero, -0x64
    ctx->pc = 0x399bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
    // 0x399bb4: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x399bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x399bb8: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x399bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x399bbc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x399bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x399bc0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x399bc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x399bc4: 0x8f828c50  lw          $v0, -0x73B0($gp)
    ctx->pc = 0x399bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x399bc8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x399bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x399bcc: 0xc0f062c  jal         func_3C18B0
    ctx->pc = 0x399BCCu;
    SET_GPR_U32(ctx, 31, 0x399BD4u);
    ctx->pc = 0x399BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399BCCu;
    // 0x399bd0: 0x24471d18  addiu       $a3, $v0, 0x1D18 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 7448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C18B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C18B0u, 0x399BCCu, 0x399BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399BD4u;
label_399bd4:
    // 0x399bd4: 0x0  nop
    ctx->pc = 0x399bd4u;
    // NOP
label_399bd8:
    // 0x399bd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x399bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x399bdc: 0x1662001c  bne         $s3, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x399BDCu;
    {
        const bool branch_taken_0x399bdc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x399BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399BDCu;
        // 0x399be0: 0x3c020066  lui         $v0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399bdc) {
            ctx->pc = 0x399C50u;
            goto label_399c50;
        }
    }
    ctx->pc = 0x399BE4u;
    // 0x399be4: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x399be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x399be8: 0x2442c930  addiu       $v0, $v0, -0x36D0
    ctx->pc = 0x399be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953264));
    // 0x399bec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x399becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399bf0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x399bf0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x399bf4: 0x2406fed4  addiu       $a2, $zero, -0x12C
    ctx->pc = 0x399bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966996));
    // 0x399bf8: 0x3c023c16  lui         $v0, 0x3C16
    ctx->pc = 0x399bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15382 << 16));
    // 0x399bfc: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x399bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x399c00: 0x3442cbe4  ori         $v0, $v0, 0xCBE4
    ctx->pc = 0x399c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52196);
    // 0x399c04: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x399c04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x399c08: 0x8f828c50  lw          $v0, -0x73B0($gp)
    ctx->pc = 0x399c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x399c0c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x399c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x399c10: 0xc0f05f0  jal         func_3C17C0
    ctx->pc = 0x399C10u;
    SET_GPR_U32(ctx, 31, 0x399C18u);
    ctx->pc = 0x399C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399C10u;
    // 0x399c14: 0x24471d04  addiu       $a3, $v0, 0x1D04 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 7428));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C17C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C17C0u, 0x399C10u, 0x399C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399C18u;
label_399c18:
    // 0x399c18: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x399c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x399c1c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x399c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x399c20: 0x2442c940  addiu       $v0, $v0, -0x36C0
    ctx->pc = 0x399c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953280));
    // 0x399c24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x399c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399c28: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x399c28u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x65C940u));
    // 0x399c2c: 0x2406fed4  addiu       $a2, $zero, -0x12C
    ctx->pc = 0x399c2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966996));
    // 0x399c30: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x399c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
    // 0x399c34: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x399c34u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x399c38: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x399c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x399c3c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x399c3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x399c40: 0x8f828c50  lw          $v0, -0x73B0($gp)
    ctx->pc = 0x399c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x399c44: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x399c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x399c48: 0xc0f062c  jal         func_3C18B0
    ctx->pc = 0x399C48u;
    SET_GPR_U32(ctx, 31, 0x399C50u);
    ctx->pc = 0x399C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399C48u;
    // 0x399c4c: 0x24471d18  addiu       $a3, $v0, 0x1D18 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 7448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C18B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C18B0u, 0x399C48u, 0x399C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399C50u;
label_399c50:
    // 0x399c50: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x399c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x399c54: 0x1662001c  bne         $s3, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x399C54u;
    {
        const bool branch_taken_0x399c54 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x399C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399C54u;
        // 0x399c58: 0x3c020066  lui         $v0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399c54) {
            ctx->pc = 0x399CC8u;
            goto label_399cc8;
        }
    }
    ctx->pc = 0x399C5Cu;
    // 0x399c5c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x399c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x399c60: 0x2442c950  addiu       $v0, $v0, -0x36B0
    ctx->pc = 0x399c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953296));
    // 0x399c64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x399c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399c68: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x399c68u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x399c6c: 0x2406ff38  addiu       $a2, $zero, -0xC8
    ctx->pc = 0x399c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
    // 0x399c70: 0x3c023b96  lui         $v0, 0x3B96
    ctx->pc = 0x399c70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15254 << 16));
    // 0x399c74: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x399c74u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x399c78: 0x3442cbe4  ori         $v0, $v0, 0xCBE4
    ctx->pc = 0x399c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52196);
    // 0x399c7c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x399c7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x399c80: 0x8f828c50  lw          $v0, -0x73B0($gp)
    ctx->pc = 0x399c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x399c84: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x399c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x399c88: 0xc0f05f0  jal         func_3C17C0
    ctx->pc = 0x399C88u;
    SET_GPR_U32(ctx, 31, 0x399C90u);
    ctx->pc = 0x399C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399C88u;
    // 0x399c8c: 0x24471d04  addiu       $a3, $v0, 0x1D04 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 7428));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C17C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C17C0u, 0x399C88u, 0x399C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399C90u;
label_399c90:
    // 0x399c90: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x399c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x399c94: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x399c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x399c98: 0x2442c960  addiu       $v0, $v0, -0x36A0
    ctx->pc = 0x399c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953312));
    // 0x399c9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x399c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399ca0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x399ca0u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x65C960u));
    // 0x399ca4: 0x2406ff38  addiu       $a2, $zero, -0xC8
    ctx->pc = 0x399ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
    // 0x399ca8: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x399ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
    // 0x399cac: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x399cacu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x399cb0: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x399cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x399cb4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x399cb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x399cb8: 0x8f828c50  lw          $v0, -0x73B0($gp)
    ctx->pc = 0x399cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x399cbc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x399cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x399cc0: 0xc0f062c  jal         func_3C18B0
    ctx->pc = 0x399CC0u;
    SET_GPR_U32(ctx, 31, 0x399CC8u);
    ctx->pc = 0x399CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399CC0u;
    // 0x399cc4: 0x24471d18  addiu       $a3, $v0, 0x1D18 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 7448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C18B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C18B0u, 0x399CC0u, 0x399CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399CC8u;
label_399cc8:
    // 0x399cc8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x399cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x399ccc: 0x1662001c  bne         $s3, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x399CCCu;
    {
        const bool branch_taken_0x399ccc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x399CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399CCCu;
        // 0x399cd0: 0x3c020066  lui         $v0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399ccc) {
            ctx->pc = 0x399D40u;
            goto label_399d40;
        }
    }
    ctx->pc = 0x399CD4u;
    // 0x399cd4: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x399cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x399cd8: 0x2442c970  addiu       $v0, $v0, -0x3690
    ctx->pc = 0x399cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953328));
    // 0x399cdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x399cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399ce0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x399ce0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x399ce4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x399ce4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399ce8: 0x3c023bc9  lui         $v0, 0x3BC9
    ctx->pc = 0x399ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15305 << 16));
    // 0x399cec: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x399cecu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x399cf0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x399cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x399cf4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x399cf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x399cf8: 0x8f828c50  lw          $v0, -0x73B0($gp)
    ctx->pc = 0x399cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x399cfc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x399cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x399d00: 0xc0f05f0  jal         func_3C17C0
    ctx->pc = 0x399D00u;
    SET_GPR_U32(ctx, 31, 0x399D08u);
    ctx->pc = 0x399D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399D00u;
    // 0x399d04: 0x24471d04  addiu       $a3, $v0, 0x1D04 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 7428));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C17C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C17C0u, 0x399D00u, 0x399D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399D08u;
label_399d08:
    // 0x399d08: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x399d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x399d0c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x399d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x399d10: 0x2442c980  addiu       $v0, $v0, -0x3680
    ctx->pc = 0x399d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953344));
    // 0x399d14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x399d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399d18: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x399d18u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x65C980u));
    // 0x399d1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x399d1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399d20: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x399d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x399d24: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x399d24u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x399d28: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x399d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x399d2c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x399d2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x399d30: 0x8f828c50  lw          $v0, -0x73B0($gp)
    ctx->pc = 0x399d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x399d34: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x399d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x399d38: 0xc0f062c  jal         func_3C18B0
    ctx->pc = 0x399D38u;
    SET_GPR_U32(ctx, 31, 0x399D40u);
    ctx->pc = 0x399D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399D38u;
    // 0x399d3c: 0x24471d18  addiu       $a3, $v0, 0x1D18 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 7448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C18B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C18B0u, 0x399D38u, 0x399D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399D40u;
label_399d40:
    // 0x399d40: 0x8f838c50  lw          $v1, -0x73B0($gp)
    ctx->pc = 0x399d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x399d44: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x399d44u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x399d48: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x399d48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x399d4c: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x399d4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x399d50: 0x2a620004  slti        $v0, $s3, 0x4
    ctx->pc = 0x399d50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x399d54: 0x26520100  addiu       $s2, $s2, 0x100
    ctx->pc = 0x399d54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
    // 0x399d58: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x399d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x399d5c: 0xa0601d05  sb          $zero, 0x1D05($v1)
    ctx->pc = 0x399d5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 7429), (uint8_t)GPR_U32(ctx, 0));
    // 0x399d60: 0x8f838c50  lw          $v1, -0x73B0($gp)
    ctx->pc = 0x399d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x399d64: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x399d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x399d68: 0xa0651d19  sb          $a1, 0x1D19($v1)
    ctx->pc = 0x399d68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 7449), (uint8_t)GPR_U32(ctx, 5));
    // 0x399d6c: 0x8f838c50  lw          $v1, -0x73B0($gp)
    ctx->pc = 0x399d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x399d70: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x399d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x399d74: 0xa4641d08  sh          $a0, 0x1D08($v1)
    ctx->pc = 0x399d74u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 7432), (uint16_t)GPR_U32(ctx, 4));
    // 0x399d78: 0x8f838c50  lw          $v1, -0x73B0($gp)
    ctx->pc = 0x399d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x399d7c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x399d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x399d80: 0xa4641d1c  sh          $a0, 0x1D1C($v1)
    ctx->pc = 0x399d80u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 7452), (uint16_t)GPR_U32(ctx, 4));
    // 0x399d84: 0x1440ff74  bnez        $v0, . + 4 + (-0x8C << 2)
    ctx->pc = 0x399D84u;
    {
        const bool branch_taken_0x399d84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x399D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399D84u;
        // 0x399d88: 0x26310028  addiu       $s1, $s1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399d84) {
            ctx->pc = 0x399B58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_399b58;
        }
    }
    ctx->pc = 0x399D8Cu;
    // 0x399d8c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x399d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399d90: 0xc0e6594  jal         func_399650
    ctx->pc = 0x399D90u;
    SET_GPR_U32(ctx, 31, 0x399D98u);
    ctx->pc = 0x399D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399D90u;
    // 0x399d94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399650u, 0x399D90u, 0x399D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399D98u;
label_399d98:
    // 0x399d98: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x399d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x399d9c: 0xc0e6594  jal         func_399650
    ctx->pc = 0x399D9Cu;
    SET_GPR_U32(ctx, 31, 0x399DA4u);
    ctx->pc = 0x399DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399D9Cu;
    // 0x399da0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399650u, 0x399D9Cu, 0x399DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399DA4u;
label_399da4:
    // 0x399da4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x399da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x399da8: 0xc0e6594  jal         func_399650
    ctx->pc = 0x399DA8u;
    SET_GPR_U32(ctx, 31, 0x399DB0u);
    ctx->pc = 0x399DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399DA8u;
    // 0x399dac: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399650u, 0x399DA8u, 0x399DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399DB0u;
label_399db0:
    // 0x399db0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x399db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x399db4: 0xc0e6594  jal         func_399650
    ctx->pc = 0x399DB4u;
    SET_GPR_U32(ctx, 31, 0x399DBCu);
    ctx->pc = 0x399DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399DB4u;
    // 0x399db8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399650u, 0x399DB4u, 0x399DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399DBCu;
label_399dbc:
    // 0x399dbc: 0x8f8a8c50  lw          $t2, -0x73B0($gp)
    ctx->pc = 0x399dbcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x399dc0: 0x3c034609  lui         $v1, 0x4609
    ctx->pc = 0x399dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17929 << 16));
    // 0x399dc4: 0x3c0245da  lui         $v0, 0x45DA
    ctx->pc = 0x399dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17882 << 16));
    // 0x399dc8: 0x3469f800  ori         $t1, $v1, 0xF800
    ctx->pc = 0x399dc8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63488);
    // 0x399dcc: 0x3445c000  ori         $a1, $v0, 0xC000
    ctx->pc = 0x399dccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x399dd0: 0x3467a800  ori         $a3, $v1, 0xA800
    ctx->pc = 0x399dd0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43008);
    // 0x399dd4: 0x3c0245c8  lui         $v0, 0x45C8
    ctx->pc = 0x399dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17864 << 16));
    // 0x399dd8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x399dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x399ddc: 0x3448f000  ori         $t0, $v0, 0xF000
    ctx->pc = 0x399ddcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x399de0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x399de0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x399de4: 0x3c0245be  lui         $v0, 0x45BE
    ctx->pc = 0x399de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17854 << 16));
    // 0x399de8: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x399de8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x399dec: 0xad451dbc  sw          $a1, 0x1DBC($t2)
    ctx->pc = 0x399decu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 7612), GPR_U32(ctx, 5));
    // 0x399df0: 0xad491dc0  sw          $t1, 0x1DC0($t2)
    ctx->pc = 0x399df0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 7616), GPR_U32(ctx, 9));
    // 0x399df4: 0x3445a000  ori         $a1, $v0, 0xA000
    ctx->pc = 0x399df4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x399df8: 0xad481dc4  sw          $t0, 0x1DC4($t2)
    ctx->pc = 0x399df8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 7620), GPR_U32(ctx, 8));
    // 0x399dfc: 0x3c024604  lui         $v0, 0x4604
    ctx->pc = 0x399dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17924 << 16));
    // 0x399e00: 0xad471dc8  sw          $a3, 0x1DC8($t2)
    ctx->pc = 0x399e00u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 7624), GPR_U32(ctx, 7));
    // 0x399e04: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x399e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x399e08: 0xa1441dcc  sb          $a0, 0x1DCC($t2)
    ctx->pc = 0x399e08u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 7628), (uint8_t)GPR_U32(ctx, 4));
    // 0x399e0c: 0xa1461dcd  sb          $a2, 0x1DCD($t2)
    ctx->pc = 0x399e0cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 7629), (uint8_t)GPR_U32(ctx, 6));
    // 0x399e10: 0xa1401dce  sb          $zero, 0x1DCE($t2)
    ctx->pc = 0x399e10u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 7630), (uint8_t)GPR_U32(ctx, 0));
    // 0x399e14: 0xad451dd0  sw          $a1, 0x1DD0($t2)
    ctx->pc = 0x399e14u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 7632), GPR_U32(ctx, 5));
    // 0x399e18: 0xad431dd4  sw          $v1, 0x1DD4($t2)
    ctx->pc = 0x399e18u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 7636), GPR_U32(ctx, 3));
    // 0x399e1c: 0xad451dd8  sw          $a1, 0x1DD8($t2)
    ctx->pc = 0x399e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 7640), GPR_U32(ctx, 5));
    // 0x399e20: 0xad421ddc  sw          $v0, 0x1DDC($t2)
    ctx->pc = 0x399e20u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 7644), GPR_U32(ctx, 2));
    // 0x399e24: 0xc0e6558  jal         func_399560
    ctx->pc = 0x399E24u;
    SET_GPR_U32(ctx, 31, 0x399E2Cu);
    ctx->pc = 0x399E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399E24u;
    // 0x399e28: 0xa1441de0  sb          $a0, 0x1DE0($t2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 10), 7648), (uint8_t)GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399560u, 0x399E24u, 0x399E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399E2Cu;
label_399e2c:
    // 0x399e2c: 0xc0e6558  jal         func_399560
    ctx->pc = 0x399E2Cu;
    SET_GPR_U32(ctx, 31, 0x399E34u);
    ctx->pc = 0x399E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399E2Cu;
    // 0x399e30: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399560u, 0x399E2Cu, 0x399E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399E34u;
label_399e34:
    // 0x399e34: 0x0  nop
    ctx->pc = 0x399e34u;
    // NOP
label_399e38:
    // 0x399e38: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x399e38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x399e3c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x399e3cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x399e40: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x399e40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x399e44: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x399e44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x399e48: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x399e48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x399e4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x399e4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x399e50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x399e50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x399e54: 0x3e00008  jr          $ra
    ctx->pc = 0x399E54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x399E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399E54u;
        // 0x399e58: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x399E54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x399E5Cu;
}
