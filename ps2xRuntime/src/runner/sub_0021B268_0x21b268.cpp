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

// Function: sub_0021B268
// Address: 0x21b268 - 0x21b47c
void sub_0021B268_0x21b268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021B268_0x21b268");
#endif

    switch (ctx->pc) {
        case 0x21b358u: goto label_21b358;
        case 0x21b370u: goto label_21b370;
        case 0x21b388u: goto label_21b388;
        case 0x21b3a0u: goto label_21b3a0;
        case 0x21b3b8u: goto label_21b3b8;
        case 0x21b3d0u: goto label_21b3d0;
        case 0x21b3e0u: goto label_21b3e0;
        case 0x21b400u: goto label_21b400;
        case 0x21b408u: goto label_21b408;
        case 0x21b410u: goto label_21b410;
        default: break;
    }

    ctx->pc = 0x21b268u;

    // 0x21b268: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x21b268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x21b26c: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x21b26cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x21b270: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21b270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21b274: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21b274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21b278: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x21b278u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b27c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x21b27cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21b280: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x21b280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x21b284: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21b284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21b288: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x21b288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x21b28c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x21b28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x21b290: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x21b290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x21b294: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x21b294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x21b298: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x21b298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x21b29c: 0x8c43a200  lw          $v1, -0x5E00($v0)
    ctx->pc = 0x21b29cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4BA200u));
    // 0x21b2a0: 0x8e451fc0  lw          $a1, 0x1FC0($s2)
    ctx->pc = 0x21b2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8128)));
    // 0x21b2a4: 0x24a60004  addiu       $a2, $a1, 0x4
    ctx->pc = 0x21b2a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x21b2a8: 0x24b11128  addiu       $s1, $a1, 0x1128
    ctx->pc = 0x21b2a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 4392));
    // 0x21b2ac: 0x24b31150  addiu       $s3, $a1, 0x1150
    ctx->pc = 0x21b2acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 4432));
    // 0x21b2b0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x21B2B0u;
    {
        const bool branch_taken_0x21b2b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B2B0u;
        // 0x21b2b4: 0x24be11f8  addiu       $fp, $a1, 0x11F8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 4600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b2b0) {
            ctx->pc = 0x21B2C0u;
            goto label_21b2c0;
        }
    }
    ctx->pc = 0x21B2B8u;
    // 0x21b2b8: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x21B2B8u;
    {
        const bool branch_taken_0x21b2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B2B8u;
        // 0x21b2bc: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b2b8) {
            ctx->pc = 0x21B44Cu;
            goto label_21b44c;
        }
    }
    ctx->pc = 0x21B2C0u;
label_21b2c0:
    // 0x21b2c0: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x21b2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x21b2c4: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x21b2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x21b2c8: 0x8ca70028  lw          $a3, 0x28($a1)
    ctx->pc = 0x21b2c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x21b2cc: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x21b2ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x21b2d0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x21b2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x21b2d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21b2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21b2d8: 0x227c2  srl         $a0, $v0, 31
    ctx->pc = 0x21b2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x21b2dc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x21b2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x21b2e0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x21b2e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x21b2e4: 0x14e0000a  bnez        $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x21B2E4u;
    {
        const bool branch_taken_0x21b2e4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B2E4u;
        // 0x21b2e8: 0x24542800  addiu       $s4, $v0, 0x2800 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 10240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b2e4) {
            ctx->pc = 0x21B310u;
            goto label_21b310;
        }
    }
    ctx->pc = 0x21B2ECu;
    // 0x21b2ec: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x21b2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x21b2f0: 0x2404ffc0  addiu       $a0, $zero, -0x40
    ctx->pc = 0x21b2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x21b2f4: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x21b2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x21b2f8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x21b2f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x21b2fc: 0x541821  addu        $v1, $v0, $s4
    ctx->pc = 0x21b2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x21b300: 0xaca20028  sw          $v0, 0x28($a1)
    ctx->pc = 0x21b300u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 2));
    // 0x21b304: 0x2463003f  addiu       $v1, $v1, 0x3F
    ctx->pc = 0x21b304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x21b308: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x21B308u;
    {
        const bool branch_taken_0x21b308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B308u;
        // 0x21b30c: 0x641024  and         $v0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b308) {
            ctx->pc = 0x21B32Cu;
            goto label_21b32c;
        }
    }
    ctx->pc = 0x21B310u;
label_21b310:
    // 0x21b310: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x21b310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x21b314: 0x2404ffc0  addiu       $a0, $zero, -0x40
    ctx->pc = 0x21b314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x21b318: 0x24e3003f  addiu       $v1, $a3, 0x3F
    ctx->pc = 0x21b318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 63));
    // 0x21b31c: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x21b31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x21b320: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x21b320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x21b324: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x21b324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x21b328: 0xaca30028  sw          $v1, 0x28($a1)
    ctx->pc = 0x21b328u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 3));
label_21b32c:
    // 0x21b32c: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x21b32cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x21b330: 0x8cb6002c  lw          $s6, 0x2C($a1)
    ctx->pc = 0x21b330u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x21b334: 0x2404ffc0  addiu       $a0, $zero, -0x40
    ctx->pc = 0x21b334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x21b338: 0x8cb00028  lw          $s0, 0x28($a1)
    ctx->pc = 0x21b338u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x21b33c: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x21b33cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x21b340: 0x3442003f  ori         $v0, $v0, 0x3F
    ctx->pc = 0x21b340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63);
    // 0x21b344: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x21b344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x21b348: 0x44a824  and         $s5, $v0, $a0
    ctx->pc = 0x21b348u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x21b34c: 0x26a3104f  addiu       $v1, $s5, 0x104F
    ctx->pc = 0x21b34cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4175));
    // 0x21b350: 0xc0876b8  jal         func_21DAE0
    ctx->pc = 0x21B350u;
    SET_GPR_U32(ctx, 31, 0x21B358u);
    ctx->pc = 0x21B354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B350u;
    // 0x21b354: 0x64b824  and         $s7, $v1, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21DAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21DAE0u, 0x21B350u, 0x21B358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B358u;
label_21b358:
    // 0x21b358: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21b358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21b35c: 0x1043001e  beq         $v0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x21B35Cu;
    {
        const bool branch_taken_0x21b35c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x21B360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B35Cu;
        // 0x21b360: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b35c) {
            ctx->pc = 0x21B3D8u;
            goto label_21b3d8;
        }
    }
    ctx->pc = 0x21B364u;
    // 0x21b364: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x21b364u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b368: 0xc042b3a  jal         func_10ACE8
    ctx->pc = 0x21B368u;
    SET_GPR_U32(ctx, 31, 0x21B370u);
    ctx->pc = 0x21B36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B368u;
    // 0x21b36c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ACE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10ACE8u, 0x21B368u, 0x21B370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B370u;
label_21b370:
    // 0x21b370: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x21b370u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x21b374: 0x24c6b490  addiu       $a2, $a2, -0x4B70
    ctx->pc = 0x21b374u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947984));
    // 0x21b378: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21b378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b37c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21b37cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b380: 0xc042ec0  jal         func_10BB00
    ctx->pc = 0x21B380u;
    SET_GPR_U32(ctx, 31, 0x21B388u);
    ctx->pc = 0x21B384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B380u;
    // 0x21b384: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BB00u, 0x21B380u, 0x21B388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B388u;
label_21b388:
    // 0x21b388: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x21b388u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x21b38c: 0x24c6b598  addiu       $a2, $a2, -0x4A68
    ctx->pc = 0x21b38cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948248));
    // 0x21b390: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21b390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b394: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x21b394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21b398: 0xc042ec0  jal         func_10BB00
    ctx->pc = 0x21B398u;
    SET_GPR_U32(ctx, 31, 0x21B3A0u);
    ctx->pc = 0x21B39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B398u;
    // 0x21b39c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BB00u, 0x21B398u, 0x21B3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B3A0u;
label_21b3a0:
    // 0x21b3a0: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x21b3a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x21b3a4: 0x24c6b640  addiu       $a2, $a2, -0x49C0
    ctx->pc = 0x21b3a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948416));
    // 0x21b3a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21b3a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b3ac: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x21b3acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21b3b0: 0xc042ec0  jal         func_10BB00
    ctx->pc = 0x21B3B0u;
    SET_GPR_U32(ctx, 31, 0x21B3B8u);
    ctx->pc = 0x21B3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B3B0u;
    // 0x21b3b4: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BB00u, 0x21B3B0u, 0x21B3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B3B8u;
label_21b3b8:
    // 0x21b3b8: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x21b3b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x21b3bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21b3bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b3c0: 0x24c6b668  addiu       $a2, $a2, -0x4998
    ctx->pc = 0x21b3c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948456));
    // 0x21b3c4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x21b3c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b3c8: 0xc042ec0  jal         func_10BB00
    ctx->pc = 0x21B3C8u;
    SET_GPR_U32(ctx, 31, 0x21B3D0u);
    ctx->pc = 0x21B3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B3C8u;
    // 0x21b3cc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BB00u, 0x21B3C8u, 0x21B3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B3D0u;
label_21b3d0:
    // 0x21b3d0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x21B3D0u;
    {
        const bool branch_taken_0x21b3d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B3D0u;
        // 0x21b3d4: 0x26300070  addiu       $s0, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b3d0) {
            ctx->pc = 0x21B3E4u;
            goto label_21b3e4;
        }
    }
    ctx->pc = 0x21B3D8u;
label_21b3d8:
    // 0x21b3d8: 0xc086dd0  jal         func_21B740
    ctx->pc = 0x21B3D8u;
    SET_GPR_U32(ctx, 31, 0x21B3E0u);
    ctx->pc = 0x21B3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B3D8u;
    // 0x21b3dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21B740u, 0x21B3D8u, 0x21B3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B3E0u;
label_21b3e0:
    // 0x21b3e0: 0x26300070  addiu       $s0, $s1, 0x70
    ctx->pc = 0x21b3e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_21b3e4:
    // 0x21b3e4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x21b3e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b3e8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x21b3e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b3ec: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x21b3ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b3f0: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x21b3f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x21b3f4: 0x24090200  addiu       $t1, $zero, 0x200
    ctx->pc = 0x21b3f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x21b3f8: 0xc0869d8  jal         func_21A760
    ctx->pc = 0x21B3F8u;
    SET_GPR_U32(ctx, 31, 0x21B400u);
    ctx->pc = 0x21B3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B3F8u;
    // 0x21b3fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A760u, 0x21B3F8u, 0x21B400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B400u;
label_21b400:
    // 0x21b400: 0xc086ab6  jal         func_21AAD8
    ctx->pc = 0x21B400u;
    SET_GPR_U32(ctx, 31, 0x21B408u);
    ctx->pc = 0x21B404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B400u;
    // 0x21b404: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21AAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AAD8u, 0x21B400u, 0x21B408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B408u;
label_21b408:
    // 0x21b408: 0xc086b36  jal         func_21ACD8
    ctx->pc = 0x21B408u;
    SET_GPR_U32(ctx, 31, 0x21B410u);
    ctx->pc = 0x21B40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B408u;
    // 0x21b40c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21ACD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21ACD8u, 0x21B408u, 0x21B410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B410u;
label_21b410:
    // 0x21b410: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21b410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21b414: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x21b414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21b418: 0xa2200010  sb          $zero, 0x10($s1)
    ctx->pc = 0x21b418u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x21b41c: 0xa2200011  sb          $zero, 0x11($s1)
    ctx->pc = 0x21b41cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 17), (uint8_t)GPR_U32(ctx, 0));
    // 0x21b420: 0xa2200012  sb          $zero, 0x12($s1)
    ctx->pc = 0x21b420u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 18), (uint8_t)GPR_U32(ctx, 0));
    // 0x21b424: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x21b424u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x21b428: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x21b428u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x21b42c: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x21b42cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x21b430: 0xafc00004  sw          $zero, 0x4($fp)
    ctx->pc = 0x21b430u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 0));
    // 0x21b434: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x21b434u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x21b438: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x21b438u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x21b43c: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x21b43cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x21b440: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x21b440u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x21b444: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x21b444u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x21b448: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x21b448u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
label_21b44c:
    // 0x21b44c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21b44cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21b450: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21b450u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21b454: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21b454u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21b458: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21b458u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21b45c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x21b45cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21b460: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x21b460u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21b464: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x21b464u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21b468: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x21b468u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x21b46c: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x21b46cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21b470: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x21b470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x21b474: 0x3e00008  jr          $ra
    ctx->pc = 0x21B474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B474u;
        // 0x21b478: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21B47Cu;
}
