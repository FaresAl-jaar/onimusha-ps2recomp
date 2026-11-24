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

// Function: sub_001A4000
// Address: 0x1a4000 - 0x1a41d8
void sub_001A4000_0x1a4000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4000_0x1a4000");
#endif

    switch (ctx->pc) {
        case 0x1a4048u: goto label_1a4048;
        case 0x1a405cu: goto label_1a405c;
        case 0x1a40e8u: goto label_1a40e8;
        case 0x1a4108u: goto label_1a4108;
        case 0x1a4180u: goto label_1a4180;
        case 0x1a41a8u: goto label_1a41a8;
        default: break;
    }

    ctx->pc = 0x1a4000u;

    // 0x1a4000: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1a4000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1a4004: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1a4004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1a4008: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1a4008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1a400c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1a400cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1a4010: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x1a4010u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4014: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1a4014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1a4018: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x1a4018u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x1a401c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1a401cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1a4020: 0x24844570  addiu       $a0, $a0, 0x4570
    ctx->pc = 0x1a4020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    // 0x1a4024: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1a4024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1a4028: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a4028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a402c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a402cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a4030: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a4030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a4034: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a4034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a4038: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a4038u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a403c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1a403cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4040: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x1A4040u;
    SET_GPR_U32(ctx, 31, 0x1A4048u);
    ctx->pc = 0x1A4044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4040u;
    // 0x1a4044: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x1A4040u, 0x1A4048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4048u;
label_1a4048:
    // 0x1a4048: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x1a4048u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x1a404c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a404cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4050: 0x24844570  addiu       $a0, $a0, 0x4570
    ctx->pc = 0x1a4050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    // 0x1a4054: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x1A4054u;
    SET_GPR_U32(ctx, 31, 0x1A405Cu);
    ctx->pc = 0x1A4058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4054u;
    // 0x1a4058: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x1A4054u, 0x1A405Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A405Cu;
label_1a405c:
    // 0x1a405c: 0xaf9e8794  sw          $fp, -0x786C($gp)
    ctx->pc = 0x1a405cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936468), GPR_U32(ctx, 30));
    // 0x1a4060: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x1a4060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1a4064: 0x8e54004c  lw          $s4, 0x4C($s2)
    ctx->pc = 0x1a4064u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1a4068: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x1a4068u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x1a406c: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1A406Cu;
    {
        const bool branch_taken_0x1a406c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A4070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A406Cu;
        // 0x1a4070: 0x8e97008c  lw          $s7, 0x8C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a406c) {
            ctx->pc = 0x1A40F0u;
            goto label_1a40f0;
        }
    }
    ctx->pc = 0x1A4074u;
    // 0x1a4074: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x1a4074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1a4078: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1A4078u;
    {
        const bool branch_taken_0x1a4078 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a4078) {
            ctx->pc = 0x1A40F0u;
            goto label_1a40f0;
        }
    }
    ctx->pc = 0x1A4080u;
    // 0x1a4080: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x1a4080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x1a4084: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1A4084u;
    {
        const bool branch_taken_0x1a4084 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a4084) {
            ctx->pc = 0x1A40F0u;
            goto label_1a40f0;
        }
    }
    ctx->pc = 0x1A408Cu;
    // 0x1a408c: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x1a408cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x1a4090: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1A4090u;
    {
        const bool branch_taken_0x1a4090 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a4090) {
            ctx->pc = 0x1A40F0u;
            goto label_1a40f0;
        }
    }
    ctx->pc = 0x1A4098u;
    // 0x1a4098: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x1a4098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1a409c: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1A409Cu;
    {
        const bool branch_taken_0x1a409c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a409c) {
            ctx->pc = 0x1A40C8u;
            goto label_1a40c8;
        }
    }
    ctx->pc = 0x1A40A4u;
    // 0x1a40a4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1a40a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1a40a8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A40A8u;
    {
        const bool branch_taken_0x1a40a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a40a8) {
            ctx->pc = 0x1A40B8u;
            goto label_1a40b8;
        }
    }
    ctx->pc = 0x1A40B0u;
    // 0x1a40b0: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x1a40b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1a40b4: 0x0  nop
    ctx->pc = 0x1a40b4u;
    // NOP
label_1a40b8:
    // 0x1a40b8: 0x6416000c  daddiu      $s6, $zero, 0xC
    ctx->pc = 0x1a40b8u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)12);
    // 0x1a40bc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1A40BCu;
    {
        const bool branch_taken_0x1a40bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A40C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A40BCu;
        // 0x1a40c0: 0x64150001  daddiu      $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a40bc) {
            ctx->pc = 0x1A40F8u;
            goto label_1a40f8;
        }
    }
    ctx->pc = 0x1A40C4u;
    // 0x1a40c4: 0x0  nop
    ctx->pc = 0x1a40c4u;
    // NOP
label_1a40c8:
    // 0x1a40c8: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x1a40c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x1a40cc: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1a40ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1a40d0: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x1a40d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x1a40d4: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1a40d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1a40d8: 0x34461604  ori         $a2, $v0, 0x1604
    ctx->pc = 0x1a40d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5636);
    // 0x1a40dc: 0x6416000c  daddiu      $s6, $zero, 0xC
    ctx->pc = 0x1a40dcu;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)12);
    // 0x1a40e0: 0xc04cd28  jal         func_1334A0
    ctx->pc = 0x1A40E0u;
    SET_GPR_U32(ctx, 31, 0x1A40E8u);
    ctx->pc = 0x1A40E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A40E0u;
    // 0x1a40e4: 0x64150001  daddiu      $s5, $zero, 0x1 (Delay Slot)
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1334A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1334A0u, 0x1A40E0u, 0x1A40E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A40E8u;
label_1a40e8:
    // 0x1a40e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A40E8u;
    {
        const bool branch_taken_0x1a40e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A40ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A40E8u;
        // 0x1a40ec: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a40e8) {
            ctx->pc = 0x1A40F8u;
            goto label_1a40f8;
        }
    }
    ctx->pc = 0x1A40F0u;
label_1a40f0:
    // 0x1a40f0: 0x6416000c  daddiu      $s6, $zero, 0xC
    ctx->pc = 0x1a40f0u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)12);
    // 0x1a40f4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1a40f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a40f8:
    // 0x1a40f8: 0x3c120084  lui         $s2, 0x84
    ctx->pc = 0x1a40f8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)132 << 16));
    // 0x1a40fc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1a40fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4100: 0x26523c50  addiu       $s2, $s2, 0x3C50
    ctx->pc = 0x1a4100u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 15440));
    // 0x1a4104: 0x0  nop
    ctx->pc = 0x1a4104u;
    // NOP
label_1a4108:
    // 0x1a4108: 0x32620003  andi        $v0, $s3, 0x3
    ctx->pc = 0x1a4108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)3);
    // 0x1a410c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a410cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a4110: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A4110u;
    {
        const bool branch_taken_0x1a4110 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1A4114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4110u;
        // 0x1a4114: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4110) {
            ctx->pc = 0x1A4128u;
            goto label_1a4128;
        }
    }
    ctx->pc = 0x1A4118u;
    // 0x1a4118: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a4118u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a411c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1A411Cu;
    {
        const bool branch_taken_0x1a411c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A411Cu;
        // 0x1a4120: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a411c) {
            ctx->pc = 0x1A4140u;
            goto label_1a4140;
        }
    }
    ctx->pc = 0x1A4124u;
    // 0x1a4124: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1a4124u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_1a4128:
    // 0x1a4128: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a4128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1a412c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a412cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a4130: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a4130u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a4134: 0x0  nop
    ctx->pc = 0x1a4134u;
    // NOP
    // 0x1a4138: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1a4138u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1a413c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1a413cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1a4140:
    // 0x1a4140: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1a4140u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1a4144: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x1a4144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
    // 0x1a4148: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1a4148u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a414c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1a414cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x1a4150: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a4150u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a4154: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a4154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4158: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1a4158u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1a415c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1a415cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4160: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1a4160u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4164: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x1a4164u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4168: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x1a4168u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a416c: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1a416cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4170: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x1a4170u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4174: 0x2a0582d  daddu       $t3, $s5, $zero
    ctx->pc = 0x1a4174u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4178: 0xc068ca0  jal         func_1A3280
    ctx->pc = 0x1A4178u;
    SET_GPR_U32(ctx, 31, 0x1A4180u);
    ctx->pc = 0x1A417Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4178u;
    // 0x1a417c: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3280u, 0x1A4178u, 0x1A4180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4180u;
label_1a4180:
    // 0x1a4180: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1a4180u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1a4184: 0x2e620040  sltiu       $v0, $s3, 0x40
    ctx->pc = 0x1a4184u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x1a4188: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x1A4188u;
    {
        const bool branch_taken_0x1a4188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A418Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4188u;
        // 0x1a418c: 0x265202d0  addiu       $s2, $s2, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 720));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4188) {
            ctx->pc = 0x1A4108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a4108;
        }
    }
    ctx->pc = 0x1A4190u;
    // 0x1a4190: 0x3c040085  lui         $a0, 0x85
    ctx->pc = 0x1a4190u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)133 << 16));
    // 0x1a4194: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1a4194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4198: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1a4198u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a419c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1a419cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a41a0: 0xc068b28  jal         func_1A2CA0
    ctx->pc = 0x1A41A0u;
    SET_GPR_U32(ctx, 31, 0x1A41A8u);
    ctx->pc = 0x1A41A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A41A0u;
    // 0x1a41a4: 0x2484f050  addiu       $a0, $a0, -0xFB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2CA0u, 0x1A41A0u, 0x1A41A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A41A8u;
label_1a41a8:
    // 0x1a41a8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1a41a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1a41ac: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1a41acu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a41b0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1a41b0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a41b4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1a41b4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a41b8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1a41b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a41bc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1a41bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a41c0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a41c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a41c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a41c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a41c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a41c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a41cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a41ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a41d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A41D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A41D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A41D0u;
        // 0x1a41d4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A41D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A41D8u;
}
