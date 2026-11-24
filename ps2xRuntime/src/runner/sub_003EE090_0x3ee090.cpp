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

// Function: sub_003EE090
// Address: 0x3ee090 - 0x3ee1a8
void sub_003EE090_0x3ee090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EE090_0x3ee090");
#endif

    switch (ctx->pc) {
        case 0x3ee0f0u: goto label_3ee0f0;
        case 0x3ee0f8u: goto label_3ee0f8;
        case 0x3ee108u: goto label_3ee108;
        case 0x3ee11cu: goto label_3ee11c;
        case 0x3ee150u: goto label_3ee150;
        case 0x3ee158u: goto label_3ee158;
        case 0x3ee160u: goto label_3ee160;
        case 0x3ee170u: goto label_3ee170;
        case 0x3ee180u: goto label_3ee180;
        case 0x3ee18cu: goto label_3ee18c;
        default: break;
    }

    ctx->pc = 0x3ee090u;

    // 0x3ee090: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ee090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3ee094: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3ee094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ee098: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3ee098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3ee09c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ee09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3ee0a0: 0x8c830148  lw          $v1, 0x148($a0)
    ctx->pc = 0x3ee0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x3ee0a4: 0x34630200  ori         $v1, $v1, 0x200
    ctx->pc = 0x3ee0a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
    // 0x3ee0a8: 0xac830148  sw          $v1, 0x148($a0)
    ctx->pc = 0x3ee0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 3));
    // 0x3ee0ac: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x3ee0acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x3ee0b0: 0x10650027  beq         $v1, $a1, . + 4 + (0x27 << 2)
    ctx->pc = 0x3EE0B0u;
    {
        const bool branch_taken_0x3ee0b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x3EE0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE0B0u;
        // 0x3ee0b4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee0b0) {
            ctx->pc = 0x3EE150u;
            goto label_3ee150;
        }
    }
    ctx->pc = 0x3EE0B8u;
    // 0x3ee0b8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EE0B8u;
    {
        const bool branch_taken_0x3ee0b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ee0b8) {
            ctx->pc = 0x3EE0C8u;
            goto label_3ee0c8;
        }
    }
    ctx->pc = 0x3EE0C0u;
    // 0x3ee0c0: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x3EE0C0u;
    {
        const bool branch_taken_0x3ee0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ee0c0) {
            ctx->pc = 0x3EE198u;
            goto label_3ee198;
        }
    }
    ctx->pc = 0x3EE0C8u;
label_3ee0c8:
    // 0x3ee0c8: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3ee0c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ee0cc: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3ee0ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ee0d0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3ee0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3ee0d4: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x3ee0d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x3ee0d8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3ee0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3ee0dc: 0xa20307f5  sb          $v1, 0x7F5($s0)
    ctx->pc = 0x3ee0dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ee0e0: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x3ee0e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x3ee0e4: 0xae0207ec  sw          $v0, 0x7EC($s0)
    ctx->pc = 0x3ee0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 2));
    // 0x3ee0e8: 0xc0fb6fc  jal         func_3EDBF0
    ctx->pc = 0x3EE0E8u;
    SET_GPR_U32(ctx, 31, 0x3EE0F0u);
    ctx->pc = 0x3EE0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE0E8u;
    // 0x3ee0ec: 0xa2050821  sb          $a1, 0x821($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EDBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EDBF0u, 0x3EE0E8u, 0x3EE0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE0F0u;
label_3ee0f0:
    // 0x3ee0f0: 0xc0fb714  jal         func_3EDC50
    ctx->pc = 0x3EE0F0u;
    SET_GPR_U32(ctx, 31, 0x3EE0F8u);
    ctx->pc = 0x3EE0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE0F0u;
    // 0x3ee0f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EDC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EDC50u, 0x3EE0F0u, 0x3EE0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE0F8u;
label_3ee0f8:
    // 0x3ee0f8: 0x26042bd0  addiu       $a0, $s0, 0x2BD0
    ctx->pc = 0x3ee0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 11216));
    // 0x3ee0fc: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x3ee0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3ee100: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x3EE100u;
    SET_GPR_U32(ctx, 31, 0x3EE108u);
    ctx->pc = 0x3EE104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE100u;
    // 0x3ee104: 0x26062b40  addiu       $a2, $s0, 0x2B40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 11072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x3EE100u, 0x3EE108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE108u;
label_3ee108:
    // 0x3ee108: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3ee108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3ee10c: 0x26042bd0  addiu       $a0, $s0, 0x2BD0
    ctx->pc = 0x3ee10cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 11216));
    // 0x3ee110: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3ee110u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3ee114: 0xc0766c8  jal         func_1D9B20
    ctx->pc = 0x3EE114u;
    SET_GPR_U32(ctx, 31, 0x3EE11Cu);
    ctx->pc = 0x3EE118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE114u;
    // 0x3ee118: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B20u, 0x3EE114u, 0x3EE11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE11Cu;
label_3ee11c:
    // 0x3ee11c: 0xe6002bb8  swc1        $f0, 0x2BB8($s0)
    ctx->pc = 0x3ee11cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 11192), bits); }
    // 0x3ee120: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x3ee120u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x3ee124: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3ee124u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ee128: 0x0  nop
    ctx->pc = 0x3ee128u;
    // NOP
    // 0x3ee12c: 0x46006836  c.le.s      $f13, $f0
    ctx->pc = 0x3ee12cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ee130: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x3EE130u;
    {
        const bool branch_taken_0x3ee130 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3EE134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE130u;
        // 0x3ee134: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee130) {
            ctx->pc = 0x3EE140u;
            goto label_3ee140;
        }
    }
    ctx->pc = 0x3EE138u;
    // 0x3ee138: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x3EE138u;
    {
        const bool branch_taken_0x3ee138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE138u;
        // 0x3ee13c: 0xa2030780  sb          $v1, 0x780($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee138) {
            ctx->pc = 0x3EE198u;
            goto label_3ee198;
        }
    }
    ctx->pc = 0x3EE140u;
label_3ee140:
    // 0x3ee140: 0x3c02c47a  lui         $v0, 0xC47A
    ctx->pc = 0x3ee140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50298 << 16));
    // 0x3ee144: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3ee144u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3ee148: 0xc0fb738  jal         func_3EDCE0
    ctx->pc = 0x3EE148u;
    SET_GPR_U32(ctx, 31, 0x3EE150u);
    ctx->pc = 0x3EE14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE148u;
    // 0x3ee14c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EDCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EDCE0u, 0x3EE148u, 0x3EE150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE150u;
label_3ee150:
    // 0x3ee150: 0xc0fb714  jal         func_3EDC50
    ctx->pc = 0x3EE150u;
    SET_GPR_U32(ctx, 31, 0x3EE158u);
    ctx->pc = 0x3EE154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE150u;
    // 0x3ee154: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EDC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EDC50u, 0x3EE150u, 0x3EE158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE158u;
label_3ee158:
    // 0x3ee158: 0xc0fb724  jal         func_3EDC90
    ctx->pc = 0x3EE158u;
    SET_GPR_U32(ctx, 31, 0x3EE160u);
    ctx->pc = 0x3EE15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE158u;
    // 0x3ee15c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EDC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EDC90u, 0x3EE158u, 0x3EE160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE160u;
label_3ee160:
    // 0x3ee160: 0xc60c2bb8  lwc1        $f12, 0x2BB8($s0)
    ctx->pc = 0x3ee160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 11192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3ee164: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x3ee164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3ee168: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x3EE168u;
    SET_GPR_U32(ctx, 31, 0x3EE170u);
    ctx->pc = 0x3EE16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE168u;
    // 0x3ee16c: 0x26052bd0  addiu       $a1, $s0, 0x2BD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 11216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x3EE168u, 0x3EE170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE170u;
label_3ee170:
    // 0x3ee170: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x3ee170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3ee174: 0x26062b40  addiu       $a2, $s0, 0x2B40
    ctx->pc = 0x3ee174u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 11072));
    // 0x3ee178: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x3EE178u;
    SET_GPR_U32(ctx, 31, 0x3EE180u);
    ctx->pc = 0x3EE17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE178u;
    // 0x3ee17c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x3EE178u, 0x3EE180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE180u;
label_3ee180:
    // 0x3ee180: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ee180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ee184: 0xc0fb74c  jal         func_3EDD30
    ctx->pc = 0x3EE184u;
    SET_GPR_U32(ctx, 31, 0x3EE18Cu);
    ctx->pc = 0x3EE188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE184u;
    // 0x3ee188: 0x26052bb8  addiu       $a1, $s0, 0x2BB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 11192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EDD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EDD30u, 0x3EE184u, 0x3EE18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE18Cu;
label_3ee18c:
    // 0x3ee18c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3EE18Cu;
    {
        const bool branch_taken_0x3ee18c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE18Cu;
        // 0x3ee190: 0x24030022  addiu       $v1, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee18c) {
            ctx->pc = 0x3EE198u;
            goto label_3ee198;
        }
    }
    ctx->pc = 0x3EE194u;
    // 0x3ee194: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x3ee194u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
label_3ee198:
    // 0x3ee198: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3ee198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ee19c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ee19cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ee1a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3EE1A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EE1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE1A0u;
        // 0x3ee1a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EE1A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EE1A8u;
}
