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

// Function: sub_00286FF0
// Address: 0x286ff0 - 0x287244
void sub_00286FF0_0x286ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00286FF0_0x286ff0");
#endif

    switch (ctx->pc) {
        case 0x287040u: goto label_287040;
        case 0x287054u: goto label_287054;
        case 0x287060u: goto label_287060;
        case 0x287074u: goto label_287074;
        case 0x287090u: goto label_287090;
        case 0x2870a8u: goto label_2870a8;
        case 0x2870b4u: goto label_2870b4;
        case 0x2870d0u: goto label_2870d0;
        case 0x2870dcu: goto label_2870dc;
        case 0x28714cu: goto label_28714c;
        case 0x28718cu: goto label_28718c;
        case 0x28719cu: goto label_28719c;
        case 0x2871acu: goto label_2871ac;
        case 0x2871f8u: goto label_2871f8;
        default: break;
    }

    ctx->pc = 0x286ff0u;

    // 0x286ff0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x286ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x286ff4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x286ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x286ff8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x286ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x286ffc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x286ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x287000: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x287000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x287004: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x287004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x287008: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x287008u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28700c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28700cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x287010: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x287010u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287014: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x287014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x287018: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x287018u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28701c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28701cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x287020: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x287020u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287024: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x287024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x287028: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x287028u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28702c: 0x90e50010  lbu         $a1, 0x10($a3)
    ctx->pc = 0x28702cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x287030: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x287030u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287034: 0x90e60011  lbu         $a2, 0x11($a3)
    ctx->pc = 0x287034u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 17)));
    // 0x287038: 0xc07454c  jal         func_1D1530
    ctx->pc = 0x287038u;
    SET_GPR_U32(ctx, 31, 0x287040u);
    ctx->pc = 0x28703Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287038u;
    // 0x28703c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1530u, 0x287038u, 0x287040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287040u;
label_287040:
    // 0x287040: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x287040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x287044: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x287044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287048: 0xdc265ae8  ld          $a2, 0x5AE8($at)
    ctx->pc = 0x287048u;
    SET_GPR_U64(ctx, 6, FAST_READ64(0x665AE8u));
    // 0x28704c: 0xc074648  jal         func_1D1920
    ctx->pc = 0x28704Cu;
    SET_GPR_U32(ctx, 31, 0x287054u);
    ctx->pc = 0x287050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28704Cu;
    // 0x287050: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x28704Cu, 0x287054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287054u;
label_287054:
    // 0x287054: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x287054u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x287058: 0xc07456c  jal         func_1D15B0
    ctx->pc = 0x287058u;
    SET_GPR_U32(ctx, 31, 0x287060u);
    ctx->pc = 0x28705Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287058u;
    // 0x28705c: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15B0u, 0x287058u, 0x287060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287060u;
label_287060:
    // 0x287060: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x287060u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x287064: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x287064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x287068: 0x2832021  addu        $a0, $s4, $v1
    ctx->pc = 0x287068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x28706c: 0xc074648  jal         func_1D1920
    ctx->pc = 0x28706Cu;
    SET_GPR_U32(ctx, 31, 0x287074u);
    ctx->pc = 0x287070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28706Cu;
    // 0x287070: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x28706Cu, 0x287074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287074u;
label_287074:
    // 0x287074: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x287074u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x287078: 0x9242001c  lbu         $v0, 0x1C($s2)
    ctx->pc = 0x287078u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x28707c: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x28707cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x287080: 0x10200065  beqz        $at, . + 4 + (0x65 << 2)
    ctx->pc = 0x287080u;
    {
        const bool branch_taken_0x287080 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x287084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287080u;
        // 0x287084: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287080) {
            ctx->pc = 0x287218u;
            goto label_287218;
        }
    }
    ctx->pc = 0x287088u;
    // 0x287088: 0x15b43c  dsll32      $s6, $s5, 16
    ctx->pc = 0x287088u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 21) << (32 + 16));
    // 0x28708c: 0x16b43f  dsra32      $s6, $s6, 16
    ctx->pc = 0x28708cu;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 16));
label_287090:
    // 0x287090: 0x86630010  lh          $v1, 0x10($s3)
    ctx->pc = 0x287090u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x287094: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x287094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x287098: 0x10620059  beq         $v1, $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x287098u;
    {
        const bool branch_taken_0x287098 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28709Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287098u;
        // 0x28709c: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287098) {
            ctx->pc = 0x287200u;
            goto label_287200;
        }
    }
    ctx->pc = 0x2870A0u;
    // 0x2870a0: 0xc074570  jal         func_1D15C0
    ctx->pc = 0x2870A0u;
    SET_GPR_U32(ctx, 31, 0x2870A8u);
    ctx->pc = 0x1D15C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15C0u, 0x2870A0u, 0x2870A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2870A8u;
label_2870a8:
    // 0x2870a8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2870a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2870ac: 0xc07457c  jal         func_1D15F0
    ctx->pc = 0x2870ACu;
    SET_GPR_U32(ctx, 31, 0x2870B4u);
    ctx->pc = 0x2870B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2870ACu;
    // 0x2870b0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15F0u, 0x2870ACu, 0x2870B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2870B4u;
label_2870b4:
    // 0x2870b4: 0x92680012  lbu         $t0, 0x12($s3)
    ctx->pc = 0x2870b4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 18)));
    // 0x2870b8: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x2870b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x2870bc: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2870bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2870c0: 0x26640040  addiu       $a0, $s3, 0x40
    ctx->pc = 0x2870c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x2870c4: 0x34650040  ori         $a1, $v1, 0x40
    ctx->pc = 0x2870c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x2870c8: 0xc074458  jal         func_1D1160
    ctx->pc = 0x2870C8u;
    SET_GPR_U32(ctx, 31, 0x2870D0u);
    ctx->pc = 0x2870CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2870C8u;
    // 0x2870cc: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1160u, 0x2870C8u, 0x2870D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2870D0u;
label_2870d0:
    // 0x2870d0: 0x9244001d  lbu         $a0, 0x1D($s2)
    ctx->pc = 0x2870d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 29)));
    // 0x2870d4: 0xc0a1224  jal         func_284890
    ctx->pc = 0x2870D4u;
    SET_GPR_U32(ctx, 31, 0x2870DCu);
    ctx->pc = 0x2870D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2870D4u;
    // 0x2870d8: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284890u, 0x2870D4u, 0x2870DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2870DCu;
label_2870dc:
    // 0x2870dc: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2870dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2870e0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x2870e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x2870e4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2870e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2870e8: 0x26650030  addiu       $a1, $s3, 0x30
    ctx->pc = 0x2870e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x2870ec: 0x7c220080  sq          $v0, 0x80($at)
    ctx->pc = 0x2870ecu;
    runtime->Store128(rdram, ctx, 0x70000080u, GPR_VEC(ctx, 2));
    // 0x2870f0: 0x8663000e  lh          $v1, 0xE($s3)
    ctx->pc = 0x2870f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
    // 0x2870f4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x2870f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x2870f8: 0x9242001e  lbu         $v0, 0x1E($s2)
    ctx->pc = 0x2870f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 30)));
    // 0x2870fc: 0x761818  mult        $v1, $v1, $s6
    ctx->pc = 0x2870fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x287100: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x287100u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x287104: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x287104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x287108: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x287108u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x28710c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x28710cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x287110: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x287110u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x287114: 0xac22008c  sw          $v0, 0x8C($at)
    ctx->pc = 0x287114u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 140), GPR_U32(ctx, 2));
    // 0x287118: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x287118u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x28711c: 0x78220080  lq          $v0, 0x80($at)
    ctx->pc = 0x28711cu;
    SET_GPR_VEC(ctx, 2, runtime->Load128(rdram, ctx, 0x70000080u));
    // 0x287120: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x287120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x287124: 0x7c220090  sq          $v0, 0x90($at)
    ctx->pc = 0x287124u;
    runtime->Store128(rdram, ctx, 0x70000090u, GPR_VEC(ctx, 2));
    // 0x287128: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x287128u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x28712c: 0x78220080  lq          $v0, 0x80($at)
    ctx->pc = 0x28712cu;
    SET_GPR_VEC(ctx, 2, runtime->Load128(rdram, ctx, 0x70000080u));
    // 0x287130: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x287130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x287134: 0x7c2200a0  sq          $v0, 0xA0($at)
    ctx->pc = 0x287134u;
    runtime->Store128(rdram, ctx, 0x700000A0u, GPR_VEC(ctx, 2));
    // 0x287138: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x287138u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x28713c: 0x78220080  lq          $v0, 0x80($at)
    ctx->pc = 0x28713cu;
    SET_GPR_VEC(ctx, 2, runtime->Load128(rdram, ctx, 0x70000080u));
    // 0x287140: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x287140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x287144: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x287144u;
    SET_GPR_U32(ctx, 31, 0x28714Cu);
    ctx->pc = 0x287148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287144u;
    // 0x287148: 0x7c2200b0  sq          $v0, 0xB0($at) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 1), 176), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x287144u, 0x28714Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28714Cu;
label_28714c:
    // 0x28714c: 0x86a30008  lh          $v1, 0x8($s5)
    ctx->pc = 0x28714cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x287150: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x287150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x287154: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x287154u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x287158: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x287158u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x28715c: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x28715cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x287160: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x287160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x287164: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x287164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x287168: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x287168u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28716c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x28716cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x287170: 0x0  nop
    ctx->pc = 0x287170u;
    // NOP
    // 0x287174: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x287174u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x287178: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x287178u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x28717c: 0x0  nop
    ctx->pc = 0x28717cu;
    // NOP
    // 0x287180: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x287180u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x287184: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x287184u;
    SET_GPR_U32(ctx, 31, 0x28718Cu);
    ctx->pc = 0x287188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287184u;
    // 0x287188: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x287184u, 0x28718Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28718Cu;
label_28718c:
    // 0x28718c: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x28718cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x287190: 0x26650020  addiu       $a1, $s3, 0x20
    ctx->pc = 0x287190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x287194: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x287194u;
    SET_GPR_U32(ctx, 31, 0x28719Cu);
    ctx->pc = 0x287198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287194u;
    // 0x287198: 0x34c40010  ori         $a0, $a2, 0x10 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x287194u, 0x28719Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28719Cu;
label_28719c:
    // 0x28719c: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x28719cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x2871a0: 0x26660020  addiu       $a2, $s3, 0x20
    ctx->pc = 0x2871a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x2871a4: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x2871A4u;
    SET_GPR_U32(ctx, 31, 0x2871ACu);
    ctx->pc = 0x2871A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2871A4u;
    // 0x2871a8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x2871A4u, 0x2871ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2871ACu;
label_2871ac:
    // 0x2871ac: 0x86a3000a  lh          $v1, 0xA($s5)
    ctx->pc = 0x2871acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 10)));
    // 0x2871b0: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x2871b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x2871b4: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x2871b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x2871b8: 0x34a60040  ori         $a2, $a1, 0x40
    ctx->pc = 0x2871b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64);
    // 0x2871bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2871bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2871c0: 0x34a70080  ori         $a3, $a1, 0x80
    ctx->pc = 0x2871c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x2871c4: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x2871c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2871c8: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2871c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2871cc: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x2871ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2871d0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2871d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2871d4: 0x2822021  addu        $a0, $s4, $v0
    ctx->pc = 0x2871d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2871d8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2871d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2871dc: 0x0  nop
    ctx->pc = 0x2871dcu;
    // NOP
    // 0x2871e0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2871e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2871e4: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x2871e4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x2871e8: 0x0  nop
    ctx->pc = 0x2871e8u;
    // NOP
    // 0x2871ec: 0x0  nop
    ctx->pc = 0x2871ecu;
    // NOP
    // 0x2871f0: 0xc0757d4  jal         func_1D5F50
    ctx->pc = 0x2871F0u;
    SET_GPR_U32(ctx, 31, 0x2871F8u);
    ctx->pc = 0x2871F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2871F0u;
    // 0x2871f4: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5F50u, 0x2871F0u, 0x2871F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2871F8u;
label_2871f8:
    // 0x2871f8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2871f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2871fc: 0x0  nop
    ctx->pc = 0x2871fcu;
    // NOP
label_287200:
    // 0x287200: 0x9242001c  lbu         $v0, 0x1C($s2)
    ctx->pc = 0x287200u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x287204: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x287204u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x287208: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x287208u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x28720c: 0x1440ffa0  bnez        $v0, . + 4 + (-0x60 << 2)
    ctx->pc = 0x28720Cu;
    {
        const bool branch_taken_0x28720c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x287210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28720Cu;
        // 0x287210: 0x26730050  addiu       $s3, $s3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28720c) {
            ctx->pc = 0x287090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_287090;
        }
    }
    ctx->pc = 0x287214u;
    // 0x287214: 0x0  nop
    ctx->pc = 0x287214u;
    // NOP
label_287218:
    // 0x287218: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x287218u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28721c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x28721cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x287220: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x287220u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x287224: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x287224u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x287228: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x287228u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28722c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28722cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x287230: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x287230u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x287234: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x287234u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x287238: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x287238u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28723c: 0x3e00008  jr          $ra
    ctx->pc = 0x28723Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28723Cu;
        // 0x287240: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28723Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x287244u;
}
