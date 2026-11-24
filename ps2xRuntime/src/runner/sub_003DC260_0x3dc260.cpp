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

// Function: sub_003DC260
// Address: 0x3dc260 - 0x3dc3e4
void sub_003DC260_0x3dc260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DC260_0x3dc260");
#endif

    switch (ctx->pc) {
        case 0x3dc2c8u: goto label_3dc2c8;
        case 0x3dc2e0u: goto label_3dc2e0;
        case 0x3dc2fcu: goto label_3dc2fc;
        case 0x3dc314u: goto label_3dc314;
        case 0x3dc368u: goto label_3dc368;
        case 0x3dc380u: goto label_3dc380;
        case 0x3dc394u: goto label_3dc394;
        case 0x3dc3acu: goto label_3dc3ac;
        default: break;
    }

    ctx->pc = 0x3dc260u;

    // 0x3dc260: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3dc260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3dc264: 0x240300fb  addiu       $v1, $zero, 0xFB
    ctx->pc = 0x3dc264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 251));
    // 0x3dc268: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3dc268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x3dc26c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3dc26cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3dc270: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3dc270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3dc274: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x3dc274u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dc278: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3dc278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3dc27c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3dc27cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3dc280: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3dc280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3dc284: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3dc284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3dc288: 0x9091065c  lbu         $s1, 0x65C($a0)
    ctx->pc = 0x3dc288u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1628)));
    // 0x3dc28c: 0x12230006  beq         $s1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3DC28Cu;
    {
        const bool branch_taken_0x3dc28c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x3DC290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC28Cu;
        // 0x3dc290: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc28c) {
            ctx->pc = 0x3DC2A8u;
            goto label_3dc2a8;
        }
    }
    ctx->pc = 0x3DC294u;
    // 0x3dc294: 0x240300fd  addiu       $v1, $zero, 0xFD
    ctx->pc = 0x3dc294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 253));
    // 0x3dc298: 0x12230003  beq         $s1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DC298u;
    {
        const bool branch_taken_0x3dc298 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x3dc298) {
            ctx->pc = 0x3DC2A8u;
            goto label_3dc2a8;
        }
    }
    ctx->pc = 0x3DC2A0u;
    // 0x3dc2a0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x3DC2A0u;
    {
        const bool branch_taken_0x3dc2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dc2a0) {
            ctx->pc = 0x3DC328u;
            goto label_3dc328;
        }
    }
    ctx->pc = 0x3DC2A8u;
label_3dc2a8:
    // 0x3dc2a8: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3dc2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3dc2ac: 0x3c130066  lui         $s3, 0x66
    ctx->pc = 0x3dc2acu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)102 << 16));
    // 0x3dc2b0: 0x32a300ff  andi        $v1, $s5, 0xFF
    ctx->pc = 0x3dc2b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x3dc2b4: 0x244247a8  addiu       $v0, $v0, 0x47A8
    ctx->pc = 0x3dc2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18344));
    // 0x3dc2b8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3dc2b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dc2bc: 0x2673e630  addiu       $s3, $s3, -0x19D0
    ctx->pc = 0x3dc2bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294960688));
    // 0x3dc2c0: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x3dc2c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3dc2c4: 0x0  nop
    ctx->pc = 0x3dc2c4u;
    // NOP
label_3dc2c8:
    // 0x3dc2c8: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x3dc2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3dc2cc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3dc2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3dc2d0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3dc2d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dc2d4: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x3dc2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x3dc2d8: 0xc041442  jal         func_105108
    ctx->pc = 0x3DC2D8u;
    SET_GPR_U32(ctx, 31, 0x3DC2E0u);
    ctx->pc = 0x3DC2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC2D8u;
    // 0x3dc2dc: 0x24450280  addiu       $a1, $v0, 0x280 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x3DC2D8u, 0x3DC2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC2E0u;
label_3dc2e0:
    // 0x3dc2e0: 0x8e052bdc  lw          $a1, 0x2BDC($s0)
    ctx->pc = 0x3dc2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11228)));
    // 0x3dc2e4: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x3dc2e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x3dc2e8: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x3dc2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x3dc2ec: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3dc2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3dc2f0: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x3dc2f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3dc2f4: 0xc0f6f48  jal         func_3DBD20
    ctx->pc = 0x3DC2F4u;
    SET_GPR_U32(ctx, 31, 0x3DC2FCu);
    ctx->pc = 0x3DC2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC2F4u;
    // 0x3dc2f8: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DBD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DBD20u, 0x3DC2F4u, 0x3DC2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC2FCu;
label_3dc2fc:
    // 0x3dc2fc: 0x920408e8  lbu         $a0, 0x8E8($s0)
    ctx->pc = 0x3dc2fcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x3dc300: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3dc300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dc304: 0x92480000  lbu         $t0, 0x0($s2)
    ctx->pc = 0x3dc304u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3dc308: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x3dc308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3dc30c: 0xc0bc8c8  jal         func_2F2320
    ctx->pc = 0x3DC30Cu;
    SET_GPR_U32(ctx, 31, 0x3DC314u);
    ctx->pc = 0x3DC310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC30Cu;
    // 0x3dc310: 0x27a70070  addiu       $a3, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2320u, 0x3DC30Cu, 0x3DC314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC314u;
label_3dc314:
    // 0x3dc314: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3dc314u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x3dc318: 0x2e830004  sltiu       $v1, $s4, 0x4
    ctx->pc = 0x3dc318u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x3dc31c: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x3DC31Cu;
    {
        const bool branch_taken_0x3dc31c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DC320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC31Cu;
        // 0x3dc320: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc31c) {
            ctx->pc = 0x3DC2C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3dc2c8;
        }
    }
    ctx->pc = 0x3DC324u;
    // 0x3dc324: 0x0  nop
    ctx->pc = 0x3dc324u;
    // NOP
label_3dc328:
    // 0x3dc328: 0x240300fc  addiu       $v1, $zero, 0xFC
    ctx->pc = 0x3dc328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    // 0x3dc32c: 0x12230006  beq         $s1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3DC32Cu;
    {
        const bool branch_taken_0x3dc32c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x3DC330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC32Cu;
        // 0x3dc330: 0x240300fd  addiu       $v1, $zero, 0xFD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 253));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc32c) {
            ctx->pc = 0x3DC348u;
            goto label_3dc348;
        }
    }
    ctx->pc = 0x3DC334u;
    // 0x3dc334: 0x12230004  beq         $s1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DC334u;
    {
        const bool branch_taken_0x3dc334 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x3dc334) {
            ctx->pc = 0x3DC348u;
            goto label_3dc348;
        }
    }
    ctx->pc = 0x3DC33Cu;
    // 0x3dc33c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x3DC33Cu;
    {
        const bool branch_taken_0x3dc33c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dc33c) {
            ctx->pc = 0x3DC3C0u;
            goto label_3dc3c0;
        }
    }
    ctx->pc = 0x3DC344u;
    // 0x3dc344: 0x0  nop
    ctx->pc = 0x3dc344u;
    // NOP
label_3dc348:
    // 0x3dc348: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3dc348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3dc34c: 0x3c110066  lui         $s1, 0x66
    ctx->pc = 0x3dc34cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)102 << 16));
    // 0x3dc350: 0x32a300ff  andi        $v1, $s5, 0xFF
    ctx->pc = 0x3dc350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x3dc354: 0x244247a8  addiu       $v0, $v0, 0x47A8
    ctx->pc = 0x3dc354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18344));
    // 0x3dc358: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3dc358u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dc35c: 0x2631e670  addiu       $s1, $s1, -0x1990
    ctx->pc = 0x3dc35cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294960752));
    // 0x3dc360: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x3dc360u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3dc364: 0x0  nop
    ctx->pc = 0x3dc364u;
    // NOP
label_3dc368:
    // 0x3dc368: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x3dc368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3dc36c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3dc36cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3dc370: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3dc370u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dc374: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x3dc374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x3dc378: 0xc041442  jal         func_105108
    ctx->pc = 0x3DC378u;
    SET_GPR_U32(ctx, 31, 0x3DC380u);
    ctx->pc = 0x3DC37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC378u;
    // 0x3dc37c: 0x244503c0  addiu       $a1, $v0, 0x3C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x3DC378u, 0x3DC380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC380u;
label_3dc380:
    // 0x3dc380: 0x8e052bdc  lw          $a1, 0x2BDC($s0)
    ctx->pc = 0x3dc380u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11228)));
    // 0x3dc384: 0x324700ff  andi        $a3, $s2, 0xFF
    ctx->pc = 0x3dc384u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x3dc388: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3dc388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3dc38c: 0xc0f6f48  jal         func_3DBD20
    ctx->pc = 0x3DC38Cu;
    SET_GPR_U32(ctx, 31, 0x3DC394u);
    ctx->pc = 0x3DC390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC38Cu;
    // 0x3dc390: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DBD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DBD20u, 0x3DC38Cu, 0x3DC394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC394u;
label_3dc394:
    // 0x3dc394: 0x920408e8  lbu         $a0, 0x8E8($s0)
    ctx->pc = 0x3dc394u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x3dc398: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3dc398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dc39c: 0x92680000  lbu         $t0, 0x0($s3)
    ctx->pc = 0x3dc39cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3dc3a0: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x3dc3a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3dc3a4: 0xc0bc8c8  jal         func_2F2320
    ctx->pc = 0x3DC3A4u;
    SET_GPR_U32(ctx, 31, 0x3DC3ACu);
    ctx->pc = 0x3DC3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC3A4u;
    // 0x3dc3a8: 0x27a70070  addiu       $a3, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2320u, 0x3DC3A4u, 0x3DC3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC3ACu;
label_3dc3ac:
    // 0x3dc3ac: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3dc3acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3dc3b0: 0x2e430004  sltiu       $v1, $s2, 0x4
    ctx->pc = 0x3dc3b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x3dc3b4: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x3DC3B4u;
    {
        const bool branch_taken_0x3dc3b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DC3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC3B4u;
        // 0x3dc3b8: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc3b4) {
            ctx->pc = 0x3DC368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3dc368;
        }
    }
    ctx->pc = 0x3DC3BCu;
    // 0x3dc3bc: 0x0  nop
    ctx->pc = 0x3dc3bcu;
    // NOP
label_3dc3c0:
    // 0x3dc3c0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3dc3c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3dc3c4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3dc3c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3dc3c8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3dc3c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3dc3cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3dc3ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3dc3d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3dc3d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3dc3d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3dc3d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3dc3d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3dc3d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dc3dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3DC3DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DC3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC3DCu;
        // 0x3dc3e0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DC3DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DC3E4u;
}
