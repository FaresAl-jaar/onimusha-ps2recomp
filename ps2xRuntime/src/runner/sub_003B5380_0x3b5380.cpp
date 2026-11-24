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

// Function: sub_003B5380
// Address: 0x3b5380 - 0x3b54f0
void sub_003B5380_0x3b5380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B5380_0x3b5380");
#endif

    switch (ctx->pc) {
        case 0x3b53a8u: goto label_3b53a8;
        case 0x3b53b0u: goto label_3b53b0;
        case 0x3b53b8u: goto label_3b53b8;
        case 0x3b53ecu: goto label_3b53ec;
        case 0x3b5440u: goto label_3b5440;
        case 0x3b5454u: goto label_3b5454;
        case 0x3b5478u: goto label_3b5478;
        case 0x3b54a8u: goto label_3b54a8;
        case 0x3b54c4u: goto label_3b54c4;
        case 0x3b54d4u: goto label_3b54d4;
        default: break;
    }

    ctx->pc = 0x3b5380u;

    // 0x3b5380: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3b5380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3b5384: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3b5384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3b5388: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3b5388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3b538c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3b538cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3b5390: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b5390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3b5394: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3b5394u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5398: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b5398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3b539c: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x3b539cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3b53a0: 0xc09c46c  jal         func_2711B0
    ctx->pc = 0x3B53A0u;
    SET_GPR_U32(ctx, 31, 0x3B53A8u);
    ctx->pc = 0x3B53A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B53A0u;
    // 0x3b53a4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2711B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2711B0u, 0x3B53A0u, 0x3B53A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B53A8u;
label_3b53a8:
    // 0x3b53a8: 0xc0b78e0  jal         func_2DE380
    ctx->pc = 0x3B53A8u;
    SET_GPR_U32(ctx, 31, 0x3B53B0u);
    ctx->pc = 0x3B53ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B53A8u;
    // 0x3b53ac: 0x26440014  addiu       $a0, $s2, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE380u, 0x3B53A8u, 0x3B53B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B53B0u;
label_3b53b0:
    // 0x3b53b0: 0x24110014  addiu       $s1, $zero, 0x14
    ctx->pc = 0x3b53b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3b53b4: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x3b53b4u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3b53b8:
    // 0x3b53b8: 0x8242000f  lb          $v0, 0xF($s2)
    ctx->pc = 0x3b53b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 15)));
    // 0x3b53bc: 0x3213ffff  andi        $s3, $s0, 0xFFFF
    ctx->pc = 0x3b53bcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x3b53c0: 0x1662000b  bne         $s3, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3B53C0u;
    {
        const bool branch_taken_0x3b53c0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x3b53c0) {
            ctx->pc = 0x3B53F0u;
            goto label_3b53f0;
        }
    }
    ctx->pc = 0x3B53C8u;
    // 0x3b53c8: 0x8e4a0018  lw          $t2, 0x18($s2)
    ctx->pc = 0x3b53c8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x3b53cc: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x3b53ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x3b53d0: 0x2625fffa  addiu       $a1, $s1, -0x6
    ctx->pc = 0x3b53d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967290));
    // 0x3b53d4: 0x24847078  addiu       $a0, $a0, 0x7078
    ctx->pc = 0x3b53d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28792));
    // 0x3b53d8: 0x2406002f  addiu       $a2, $zero, 0x2F
    ctx->pc = 0x3b53d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x3b53dc: 0x3407fff9  ori         $a3, $zero, 0xFFF9
    ctx->pc = 0x3b53dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x3b53e0: 0x2408007f  addiu       $t0, $zero, 0x7F
    ctx->pc = 0x3b53e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x3b53e4: 0xc09c720  jal         func_271C80
    ctx->pc = 0x3B53E4u;
    SET_GPR_U32(ctx, 31, 0x3B53ECu);
    ctx->pc = 0x3B53E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B53E4u;
    // 0x3b53e8: 0x240900c8  addiu       $t1, $zero, 0xC8 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271C80u, 0x3B53E4u, 0x3B53ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B53ECu;
label_3b53ec:
    // 0x3b53ec: 0x0  nop
    ctx->pc = 0x3b53ecu;
    // NOP
label_3b53f0:
    // 0x3b53f0: 0x9242000d  lbu         $v0, 0xD($s2)
    ctx->pc = 0x3b53f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 13)));
    // 0x3b53f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b53f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b53f8: 0x2631804  sllv        $v1, $v1, $s3
    ctx->pc = 0x3b53f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 19) & 0x1F));
    // 0x3b53fc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3b53fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3b5400: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3B5400u;
    {
        const bool branch_taken_0x3b5400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5400u;
        // 0x3b5404: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5400) {
            ctx->pc = 0x3B5458u;
            goto label_3b5458;
        }
    }
    ctx->pc = 0x3B5408u;
    // 0x3b5408: 0x9242000e  lbu         $v0, 0xE($s2)
    ctx->pc = 0x3b5408u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 14)));
    // 0x3b540c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3b540cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3b5410: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3B5410u;
    {
        const bool branch_taken_0x3b5410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5410u;
        // 0x3b5414: 0x3c04004e  lui         $a0, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5410) {
            ctx->pc = 0x3B5440u;
            goto label_3b5440;
        }
    }
    ctx->pc = 0x3B5418u;
    // 0x3b5418: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x3b5418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x3b541c: 0x24846a24  addiu       $a0, $a0, 0x6A24
    ctx->pc = 0x3b541cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27172));
    // 0x3b5420: 0x24030031  addiu       $v1, $zero, 0x31
    ctx->pc = 0x3b5420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x3b5424: 0x8487000a  lh          $a3, 0xA($a0)
    ctx->pc = 0x3b5424u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x3b5428: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b5428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b542c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3b542cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5430: 0x3408fff8  ori         $t0, $zero, 0xFFF8
    ctx->pc = 0x3b5430u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x3b5434: 0x34498080  ori         $t1, $v0, 0x8080
    ctx->pc = 0x3b5434u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x3b5438: 0xc09c5f0  jal         func_2717C0
    ctx->pc = 0x3B5438u;
    SET_GPR_U32(ctx, 31, 0x3B5440u);
    ctx->pc = 0x3B543Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5438u;
    // 0x3b543c: 0x673823  subu        $a3, $v1, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2717C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2717C0u, 0x3B5438u, 0x3B5440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5440u;
label_3b5440:
    // 0x3b5440: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b5440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5444: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b5444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5448: 0x24060031  addiu       $a2, $zero, 0x31
    ctx->pc = 0x3b5448u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x3b544c: 0xc0ed564  jal         func_3B5590
    ctx->pc = 0x3B544Cu;
    SET_GPR_U32(ctx, 31, 0x3B5454u);
    ctx->pc = 0x3B5450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B544Cu;
    // 0x3b5450: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5590u, 0x3B544Cu, 0x3B5454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5454u;
label_3b5454:
    // 0x3b5454: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3b5454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3b5458:
    // 0x3b5458: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x3b5458u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x3b545c: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x3b545cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x3b5460: 0x24846d54  addiu       $a0, $a0, 0x6D54
    ctx->pc = 0x3b5460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27988));
    // 0x3b5464: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3b5464u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5468: 0x24070031  addiu       $a3, $zero, 0x31
    ctx->pc = 0x3b5468u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x3b546c: 0x3408fff8  ori         $t0, $zero, 0xFFF8
    ctx->pc = 0x3b546cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x3b5470: 0xc09c5f0  jal         func_2717C0
    ctx->pc = 0x3B5470u;
    SET_GPR_U32(ctx, 31, 0x3B5478u);
    ctx->pc = 0x3B5474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5470u;
    // 0x3b5474: 0x34498080  ori         $t1, $v0, 0x8080 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2717C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2717C0u, 0x3B5470u, 0x3B5478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5478u;
label_3b5478:
    // 0x3b5478: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x3b5478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3b547c: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x3b547cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3b5480: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x3b5480u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x3b5484: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x3B5484u;
    {
        const bool branch_taken_0x3b5484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B5488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5484u;
        // 0x3b5488: 0x26310077  addiu       $s1, $s1, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 119));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5484) {
            ctx->pc = 0x3B53B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b53b8;
        }
    }
    ctx->pc = 0x3B548Cu;
    // 0x3b548c: 0x92420008  lbu         $v0, 0x8($s2)
    ctx->pc = 0x3b548cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3b5490: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B5490u;
    {
        const bool branch_taken_0x3b5490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B5494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5490u;
        // 0x3b5494: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5490) {
            ctx->pc = 0x3B54B0u;
            goto label_3b54b0;
        }
    }
    ctx->pc = 0x3B5498u;
    // 0x3b5498: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3b5498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3b549c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x3b549cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3b54a0: 0xc0ed6cc  jal         func_3B5B30
    ctx->pc = 0x3B54A0u;
    SET_GPR_U32(ctx, 31, 0x3B54A8u);
    ctx->pc = 0x3B54A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B54A0u;
    // 0x3b54a4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5B30u, 0x3B54A0u, 0x3B54A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B54A8u;
label_3b54a8:
    // 0x3b54a8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3B54A8u;
    {
        const bool branch_taken_0x3b54a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b54a8) {
            ctx->pc = 0x3B54C8u;
            goto label_3b54c8;
        }
    }
    ctx->pc = 0x3B54B0u;
label_3b54b0:
    // 0x3b54b0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3b54b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3b54b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b54b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b54b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3b54b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b54bc: 0xc0ed6cc  jal         func_3B5B30
    ctx->pc = 0x3B54BCu;
    SET_GPR_U32(ctx, 31, 0x3B54C4u);
    ctx->pc = 0x3B54C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B54BCu;
    // 0x3b54c0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5B30u, 0x3B54BCu, 0x3B54C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B54C4u;
label_3b54c4:
    // 0x3b54c4: 0x0  nop
    ctx->pc = 0x3b54c4u;
    // NOP
label_3b54c8:
    // 0x3b54c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3b54c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b54cc: 0xc0ed6dc  jal         func_3B5B70
    ctx->pc = 0x3B54CCu;
    SET_GPR_U32(ctx, 31, 0x3B54D4u);
    ctx->pc = 0x3B54D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B54CCu;
    // 0x3b54d0: 0x3405fffa  ori         $a1, $zero, 0xFFFA (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65530);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5B70u, 0x3B54CCu, 0x3B54D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B54D4u;
label_3b54d4:
    // 0x3b54d4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3b54d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b54d8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3b54d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b54dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3b54dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b54e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b54e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b54e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b54e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b54e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3B54E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B54ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B54E8u;
        // 0x3b54ec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B54E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B54F0u;
}
