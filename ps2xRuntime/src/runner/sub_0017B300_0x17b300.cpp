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

// Function: sub_0017B300
// Address: 0x17b300 - 0x17b730
void sub_0017B300_0x17b300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017B300_0x17b300");
#endif

    ctx->pc = 0x17b300u;

    // 0x17b300: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x17b300u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x17b304: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x17b304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x17b308: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17B308u;
    {
        const bool branch_taken_0x17b308 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x17B30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B308u;
        // 0x17b30c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b308) {
            ctx->pc = 0x17B330u;
            goto label_17b330;
        }
    }
    ctx->pc = 0x17B310u;
    // 0x17b310: 0x90ab0002  lbu         $t3, 0x2($a1)
    ctx->pc = 0x17b310u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x17b314: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x17b314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x17b318: 0x15620003  bne         $t3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17B318u;
    {
        const bool branch_taken_0x17b318 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 2));
        if (branch_taken_0x17b318) {
            ctx->pc = 0x17B328u;
            goto label_17b328;
        }
    }
    ctx->pc = 0x17B320u;
    // 0x17b320: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x17B320u;
    {
        const bool branch_taken_0x17b320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B320u;
        // 0x17b324: 0x640b0009  daddiu      $t3, $zero, 0x9 (Delay Slot)
        SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)9);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b320) {
            ctx->pc = 0x17B388u;
            goto label_17b388;
        }
    }
    ctx->pc = 0x17B328u;
label_17b328:
    // 0x17b328: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x17B328u;
    {
        const bool branch_taken_0x17b328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b328) {
            ctx->pc = 0x17B388u;
            goto label_17b388;
        }
    }
    ctx->pc = 0x17B330u;
label_17b330:
    // 0x17b330: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x17b330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17b334: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x17B334u;
    {
        const bool branch_taken_0x17b334 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17b334) {
            ctx->pc = 0x17B368u;
            goto label_17b368;
        }
    }
    ctx->pc = 0x17B33Cu;
    // 0x17b33c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17B33Cu;
    {
        const bool branch_taken_0x17b33c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b33c) {
            ctx->pc = 0x17B350u;
            goto label_17b350;
        }
    }
    ctx->pc = 0x17B344u;
    // 0x17b344: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x17B344u;
    {
        const bool branch_taken_0x17b344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b344) {
            ctx->pc = 0x17B380u;
            goto label_17b380;
        }
    }
    ctx->pc = 0x17B34Cu;
    // 0x17b34c: 0x0  nop
    ctx->pc = 0x17b34cu;
    // NOP
label_17b350:
    // 0x17b350: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x17b350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x17b354: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x17b354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17b358: 0x47180a  movz        $v1, $v0, $a3
    ctx->pc = 0x17b358u;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x17b35c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x17B35Cu;
    {
        const bool branch_taken_0x17b35c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B35Cu;
        // 0x17b360: 0x306b00ff  andi        $t3, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b35c) {
            ctx->pc = 0x17B388u;
            goto label_17b388;
        }
    }
    ctx->pc = 0x17B364u;
    // 0x17b364: 0x0  nop
    ctx->pc = 0x17b364u;
    // NOP
label_17b368:
    // 0x17b368: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x17b368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x17b36c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x17b36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x17b370: 0x47180a  movz        $v1, $v0, $a3
    ctx->pc = 0x17b370u;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x17b374: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17B374u;
    {
        const bool branch_taken_0x17b374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B374u;
        // 0x17b378: 0x306b00ff  andi        $t3, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b374) {
            ctx->pc = 0x17B388u;
            goto label_17b388;
        }
    }
    ctx->pc = 0x17B37Cu;
    // 0x17b37c: 0x0  nop
    ctx->pc = 0x17b37cu;
    // NOP
label_17b380:
    // 0x17b380: 0x640b0009  daddiu      $t3, $zero, 0x9
    ctx->pc = 0x17b380u;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)9);
    // 0x17b384: 0x0  nop
    ctx->pc = 0x17b384u;
    // NOP
label_17b388:
    // 0x17b388: 0x310300ff  andi        $v1, $t0, 0xFF
    ctx->pc = 0x17b388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x17b38c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17b38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b390: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17B390u;
    {
        const bool branch_taken_0x17b390 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x17b390) {
            ctx->pc = 0x17B3A0u;
            goto label_17b3a0;
        }
    }
    ctx->pc = 0x17B398u;
    // 0x17b398: 0x640b0009  daddiu      $t3, $zero, 0x9
    ctx->pc = 0x17b398u;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)9);
    // 0x17b39c: 0x0  nop
    ctx->pc = 0x17b39cu;
    // NOP
label_17b3a0:
    // 0x17b3a0: 0x316200ff  andi        $v0, $t3, 0xFF
    ctx->pc = 0x17b3a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
    // 0x17b3a4: 0x2443fffd  addiu       $v1, $v0, -0x3
    ctx->pc = 0x17b3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x17b3a8: 0x2c610008  sltiu       $at, $v1, 0x8
    ctx->pc = 0x17b3a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x17b3ac: 0x1020006e  beqz        $at, . + 4 + (0x6E << 2)
    ctx->pc = 0x17B3ACu;
    {
        const bool branch_taken_0x17b3ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B3ACu;
        // 0x17b3b0: 0xa0802c74  sb          $zero, 0x2C74($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 11380), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b3ac) {
            ctx->pc = 0x17B568u;
            goto label_17b568;
        }
    }
    ctx->pc = 0x17B3B4u;
    // 0x17b3b4: 0x3c070066  lui         $a3, 0x66
    ctx->pc = 0x17b3b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)102 << 16));
    // 0x17b3b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x17b3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17b3bc: 0x24e75580  addiu       $a3, $a3, 0x5580
    ctx->pc = 0x17b3bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 21888));
    // 0x17b3c0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x17b3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x17b3c4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x17b3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17b3c8: 0x600008  jr          $v1
    ctx->pc = 0x17B3C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17B3D0u: goto label_17b3d0;
            case 0x17B568u: goto label_17b568;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B3C8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x17B3D0u;
label_17b3d0:
    // 0x17b3d0: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x17b3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x17b3d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17b3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17b3d8: 0xc0602d  daddu       $t4, $a2, $zero
    ctx->pc = 0x17b3d8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b3dc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x17b3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x17b3e0: 0x3c080041  lui         $t0, 0x41
    ctx->pc = 0x17b3e0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65 << 16));
    // 0x17b3e4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x17b3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x17b3e8: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x17b3e8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17b3ec: 0xa06b001f  sb          $t3, 0x1F($v1)
    ctx->pc = 0x17b3ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 31), (uint8_t)GPR_U32(ctx, 11));
    // 0x17b3f0: 0x258c0008  addiu       $t4, $t4, 0x8
    ctx->pc = 0x17b3f0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 8));
    // 0x17b3f4: 0x90ab0001  lbu         $t3, 0x1($a1)
    ctx->pc = 0x17b3f4u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x17b3f8: 0x2508d224  addiu       $t0, $t0, -0x2DDC
    ctx->pc = 0x17b3f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294955556));
    // 0x17b3fc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x17b3fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b400: 0xa06b001c  sb          $t3, 0x1C($v1)
    ctx->pc = 0x17b400u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 28), (uint8_t)GPR_U32(ctx, 11));
    // 0x17b404: 0x90a50002  lbu         $a1, 0x2($a1)
    ctx->pc = 0x17b404u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x17b408: 0xa065001d  sb          $a1, 0x1D($v1)
    ctx->pc = 0x17b408u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 29), (uint8_t)GPR_U32(ctx, 5));
    // 0x17b40c: 0xa060001e  sb          $zero, 0x1E($v1)
    ctx->pc = 0x17b40cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 30), (uint8_t)GPR_U32(ctx, 0));
    // 0x17b410: 0xac6a0038  sw          $t2, 0x38($v1)
    ctx->pc = 0x17b410u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 10));
    // 0x17b414: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x17b414u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x17b418: 0xac65000c  sw          $a1, 0xC($v1)
    ctx->pc = 0x17b418u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
    // 0x17b41c: 0x8d850000  lw          $a1, 0x0($t4)
    ctx->pc = 0x17b41cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x17b420: 0xac65002c  sw          $a1, 0x2C($v1)
    ctx->pc = 0x17b420u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 5));
    // 0x17b424: 0x8d850004  lw          $a1, 0x4($t4)
    ctx->pc = 0x17b424u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x17b428: 0xac650034  sw          $a1, 0x34($v1)
    ctx->pc = 0x17b428u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 5));
    // 0x17b42c: 0x258c0008  addiu       $t4, $t4, 0x8
    ctx->pc = 0x17b42cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 8));
    // 0x17b430: 0x8d850000  lw          $a1, 0x0($t4)
    ctx->pc = 0x17b430u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x17b434: 0xac65003c  sw          $a1, 0x3C($v1)
    ctx->pc = 0x17b434u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 5));
    // 0x17b438: 0x8d850004  lw          $a1, 0x4($t4)
    ctx->pc = 0x17b438u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x17b43c: 0xac650040  sw          $a1, 0x40($v1)
    ctx->pc = 0x17b43cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 5));
    // 0x17b440: 0x258c0008  addiu       $t4, $t4, 0x8
    ctx->pc = 0x17b440u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 8));
    // 0x17b444: 0x8d850000  lw          $a1, 0x0($t4)
    ctx->pc = 0x17b444u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x17b448: 0xac650044  sw          $a1, 0x44($v1)
    ctx->pc = 0x17b448u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 5));
    // 0x17b44c: 0x8c650038  lw          $a1, 0x38($v1)
    ctx->pc = 0x17b44cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x17b450: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x17b450u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x17b454: 0xac660010  sw          $a2, 0x10($v1)
    ctx->pc = 0x17b454u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 6));
    // 0x17b458: 0x8c65003c  lw          $a1, 0x3C($v1)
    ctx->pc = 0x17b458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x17b45c: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x17b45cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x17b460: 0xac660014  sw          $a2, 0x14($v1)
    ctx->pc = 0x17b460u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 6));
    // 0x17b464: 0x8c650040  lw          $a1, 0x40($v1)
    ctx->pc = 0x17b464u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x17b468: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x17b468u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x17b46c: 0xac660018  sw          $a2, 0x18($v1)
    ctx->pc = 0x17b46cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 6));
    // 0x17b470: 0x8065001f  lb          $a1, 0x1F($v1)
    ctx->pc = 0x17b470u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 31)));
    // 0x17b474: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x17b474u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x17b478: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x17b478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x17b47c: 0x8ca52b50  lw          $a1, 0x2B50($a1)
    ctx->pc = 0x17b47cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11088)));
    // 0x17b480: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x17b480u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x17b484: 0x8065001f  lb          $a1, 0x1F($v1)
    ctx->pc = 0x17b484u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 31)));
    // 0x17b488: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x17b488u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x17b48c: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x17b48cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x17b490: 0x8ca52be0  lw          $a1, 0x2BE0($a1)
    ctx->pc = 0x17b490u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11232)));
    // 0x17b494: 0xac650028  sw          $a1, 0x28($v1)
    ctx->pc = 0x17b494u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 5));
    // 0x17b498: 0x8065001f  lb          $a1, 0x1F($v1)
    ctx->pc = 0x17b498u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 31)));
    // 0x17b49c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x17b49cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x17b4a0: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x17b4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x17b4a4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x17b4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17b4a8: 0xac650030  sw          $a1, 0x30($v1)
    ctx->pc = 0x17b4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 5));
    // 0x17b4ac: 0xa0670020  sb          $a3, 0x20($v1)
    ctx->pc = 0x17b4acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 32), (uint8_t)GPR_U32(ctx, 7));
    // 0x17b4b0: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x17b4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x17b4b4: 0x2ca10701  sltiu       $at, $a1, 0x701
    ctx->pc = 0x17b4b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1793) ? 1 : 0);
    // 0x17b4b8: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x17B4B8u;
    {
        const bool branch_taken_0x17b4b8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x17b4b8) {
            ctx->pc = 0x17B4C8u;
            goto label_17b4c8;
        }
    }
    ctx->pc = 0x17B4C0u;
    // 0x17b4c0: 0x35250002  ori         $a1, $t1, 0x2
    ctx->pc = 0x17b4c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2);
    // 0x17b4c4: 0x30a900ff  andi        $t1, $a1, 0xFF
    ctx->pc = 0x17b4c4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_17b4c8:
    // 0x17b4c8: 0x8c65002c  lw          $a1, 0x2C($v1)
    ctx->pc = 0x17b4c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x17b4cc: 0x2ca12001  sltiu       $at, $a1, 0x2001
    ctx->pc = 0x17b4ccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8193) ? 1 : 0);
    // 0x17b4d0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x17B4D0u;
    {
        const bool branch_taken_0x17b4d0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B4D0u;
        // 0x17b4d4: 0x35250004  ori         $a1, $t1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b4d0) {
            ctx->pc = 0x17B4E0u;
            goto label_17b4e0;
        }
    }
    ctx->pc = 0x17B4D8u;
    // 0x17b4d8: 0x30a900ff  andi        $t1, $a1, 0xFF
    ctx->pc = 0x17b4d8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x17b4dc: 0x0  nop
    ctx->pc = 0x17b4dcu;
    // NOP
label_17b4e0:
    // 0x17b4e0: 0x2442fffd  addiu       $v0, $v0, -0x3
    ctx->pc = 0x17b4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x17b4e4: 0x2c410006  sltiu       $at, $v0, 0x6
    ctx->pc = 0x17b4e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x17b4e8: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x17B4E8u;
    {
        const bool branch_taken_0x17b4e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B4E8u;
        // 0x17b4ec: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b4e8) {
            ctx->pc = 0x17B550u;
            goto label_17b550;
        }
    }
    ctx->pc = 0x17B4F0u;
    // 0x17b4f0: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x17b4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x17b4f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17b4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17b4f8: 0x24a55560  addiu       $a1, $a1, 0x5560
    ctx->pc = 0x17b4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21856));
    // 0x17b4fc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x17b4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x17b500: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17b500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17b504: 0x400008  jr          $v0
    ctx->pc = 0x17B504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17B510u: goto label_17b510;
            case 0x17B518u: goto label_17b518;
            case 0x17B528u: goto label_17b528;
            case 0x17B530u: goto label_17b530;
            case 0x17B540u: goto label_17b540;
            case 0x17B548u: goto label_17b548;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B504u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x17B50Cu;
    // 0x17b50c: 0x0  nop
    ctx->pc = 0x17b50cu;
    // NOP
label_17b510:
    // 0x17b510: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x17B510u;
    {
        const bool branch_taken_0x17b510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B510u;
        // 0x17b514: 0x3406faf0  ori         $a2, $zero, 0xFAF0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64240);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b510) {
            ctx->pc = 0x17B550u;
            goto label_17b550;
        }
    }
    ctx->pc = 0x17B518u;
label_17b518:
    // 0x17b518: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x17b518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x17b51c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x17B51Cu;
    {
        const bool branch_taken_0x17b51c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B51Cu;
        // 0x17b520: 0x3446b500  ori         $a2, $v0, 0xB500 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46336);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b51c) {
            ctx->pc = 0x17B550u;
            goto label_17b550;
        }
    }
    ctx->pc = 0x17B524u;
    // 0x17b524: 0x0  nop
    ctx->pc = 0x17b524u;
    // NOP
label_17b528:
    // 0x17b528: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x17B528u;
    {
        const bool branch_taken_0x17b528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B528u;
        // 0x17b52c: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b528) {
            ctx->pc = 0x17B550u;
            goto label_17b550;
        }
    }
    ctx->pc = 0x17B530u;
label_17b530:
    // 0x17b530: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x17b530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x17b534: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x17B534u;
    {
        const bool branch_taken_0x17b534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B534u;
        // 0x17b538: 0x34468000  ori         $a2, $v0, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b534) {
            ctx->pc = 0x17B550u;
            goto label_17b550;
        }
    }
    ctx->pc = 0x17B53Cu;
    // 0x17b53c: 0x0  nop
    ctx->pc = 0x17b53cu;
    // NOP
label_17b540:
    // 0x17b540: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17B540u;
    {
        const bool branch_taken_0x17b540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B540u;
        // 0x17b544: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b540) {
            ctx->pc = 0x17B550u;
            goto label_17b550;
        }
    }
    ctx->pc = 0x17B548u;
label_17b548:
    // 0x17b548: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x17b548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x17b54c: 0x34467f80  ori         $a2, $v0, 0x7F80
    ctx->pc = 0x17b54cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32640);
label_17b550:
    // 0x17b550: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x17b550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x17b554: 0xc2082b  sltu        $at, $a2, $v0
    ctx->pc = 0x17b554u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x17b558: 0x10200059  beqz        $at, . + 4 + (0x59 << 2)
    ctx->pc = 0x17B558u;
    {
        const bool branch_taken_0x17b558 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B558u;
        // 0x17b55c: 0x35220008  ori         $v0, $t1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b558) {
            ctx->pc = 0x17B6C0u;
            goto label_17b6c0;
        }
    }
    ctx->pc = 0x17B560u;
    // 0x17b560: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x17B560u;
    {
        const bool branch_taken_0x17b560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B560u;
        // 0x17b564: 0x304900ff  andi        $t1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b560) {
            ctx->pc = 0x17B6C0u;
            goto label_17b6c0;
        }
    }
    ctx->pc = 0x17B568u;
label_17b568:
    // 0x17b568: 0x90882c75  lbu         $t0, 0x2C75($a0)
    ctx->pc = 0x17b568u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11381)));
    // 0x17b56c: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x17b56cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b570: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x17b570u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17b574: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x17b574u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
    // 0x17b578: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x17b578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17b57c: 0x818c0  sll         $v1, $t0, 3
    ctx->pc = 0x17b57cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x17b580: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x17b580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x17b584: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x17b584u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x17b588: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x17b588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x17b58c: 0xa068001f  sb          $t0, 0x1F($v1)
    ctx->pc = 0x17b58cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 31), (uint8_t)GPR_U32(ctx, 8));
    // 0x17b590: 0x90a80001  lbu         $t0, 0x1($a1)
    ctx->pc = 0x17b590u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x17b594: 0xa068001c  sb          $t0, 0x1C($v1)
    ctx->pc = 0x17b594u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 28), (uint8_t)GPR_U32(ctx, 8));
    // 0x17b598: 0x90a80002  lbu         $t0, 0x2($a1)
    ctx->pc = 0x17b598u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x17b59c: 0xa068001d  sb          $t0, 0x1D($v1)
    ctx->pc = 0x17b59cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 29), (uint8_t)GPR_U32(ctx, 8));
    // 0x17b5a0: 0x90a50003  lbu         $a1, 0x3($a1)
    ctx->pc = 0x17b5a0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x17b5a4: 0xa065001e  sb          $a1, 0x1E($v1)
    ctx->pc = 0x17b5a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 30), (uint8_t)GPR_U32(ctx, 5));
    // 0x17b5a8: 0xac670038  sw          $a3, 0x38($v1)
    ctx->pc = 0x17b5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 7));
    // 0x17b5ac: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x17b5acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x17b5b0: 0xac65000c  sw          $a1, 0xC($v1)
    ctx->pc = 0x17b5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
    // 0x17b5b4: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x17b5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x17b5b8: 0xac65002c  sw          $a1, 0x2C($v1)
    ctx->pc = 0x17b5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 5));
    // 0x17b5bc: 0x8d450004  lw          $a1, 0x4($t2)
    ctx->pc = 0x17b5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x17b5c0: 0xac650034  sw          $a1, 0x34($v1)
    ctx->pc = 0x17b5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 5));
    // 0x17b5c4: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x17b5c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
    // 0x17b5c8: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x17b5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x17b5cc: 0xac65003c  sw          $a1, 0x3C($v1)
    ctx->pc = 0x17b5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 5));
    // 0x17b5d0: 0x8d450004  lw          $a1, 0x4($t2)
    ctx->pc = 0x17b5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x17b5d4: 0xac650040  sw          $a1, 0x40($v1)
    ctx->pc = 0x17b5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 5));
    // 0x17b5d8: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x17b5d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
    // 0x17b5dc: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x17b5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x17b5e0: 0xac650044  sw          $a1, 0x44($v1)
    ctx->pc = 0x17b5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 5));
    // 0x17b5e4: 0x8c650038  lw          $a1, 0x38($v1)
    ctx->pc = 0x17b5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x17b5e8: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x17b5e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x17b5ec: 0xac660010  sw          $a2, 0x10($v1)
    ctx->pc = 0x17b5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 6));
    // 0x17b5f0: 0x8c65003c  lw          $a1, 0x3C($v1)
    ctx->pc = 0x17b5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x17b5f4: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x17b5f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x17b5f8: 0xac660014  sw          $a2, 0x14($v1)
    ctx->pc = 0x17b5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 6));
    // 0x17b5fc: 0x8c650040  lw          $a1, 0x40($v1)
    ctx->pc = 0x17b5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x17b600: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x17b600u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x17b604: 0xac660018  sw          $a2, 0x18($v1)
    ctx->pc = 0x17b604u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 6));
    // 0x17b608: 0x8065001f  lb          $a1, 0x1F($v1)
    ctx->pc = 0x17b608u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 31)));
    // 0x17b60c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x17b60cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x17b610: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x17b610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x17b614: 0x8ca52b50  lw          $a1, 0x2B50($a1)
    ctx->pc = 0x17b614u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11088)));
    // 0x17b618: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x17b618u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x17b61c: 0x8065001f  lb          $a1, 0x1F($v1)
    ctx->pc = 0x17b61cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 31)));
    // 0x17b620: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x17b620u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x17b624: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x17b624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x17b628: 0x8ca52be0  lw          $a1, 0x2BE0($a1)
    ctx->pc = 0x17b628u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11232)));
    // 0x17b62c: 0xac650028  sw          $a1, 0x28($v1)
    ctx->pc = 0x17b62cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 5));
    // 0x17b630: 0x8c852c7c  lw          $a1, 0x2C7C($a0)
    ctx->pc = 0x17b630u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11388)));
    // 0x17b634: 0xac650030  sw          $a1, 0x30($v1)
    ctx->pc = 0x17b634u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 5));
    // 0x17b638: 0xa0620020  sb          $v0, 0x20($v1)
    ctx->pc = 0x17b638u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x17b63c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x17b63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x17b640: 0x3045000f  andi        $a1, $v0, 0xF
    ctx->pc = 0x17b640u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x17b644: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x17b644u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x17b648: 0x5282b  sltu        $a1, $zero, $a1
    ctx->pc = 0x17b648u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x17b64c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x17b64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x17b650: 0xac620024  sw          $v0, 0x24($v1)
    ctx->pc = 0x17b650u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
    // 0x17b654: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x17b654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x17b658: 0x2c410701  sltiu       $at, $v0, 0x701
    ctx->pc = 0x17b658u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1793) ? 1 : 0);
    // 0x17b65c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x17B65Cu;
    {
        const bool branch_taken_0x17b65c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B65Cu;
        // 0x17b660: 0x35220002  ori         $v0, $t1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b65c) {
            ctx->pc = 0x17B668u;
            goto label_17b668;
        }
    }
    ctx->pc = 0x17B664u;
    // 0x17b664: 0x304900ff  andi        $t1, $v0, 0xFF
    ctx->pc = 0x17b664u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_17b668:
    // 0x17b668: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x17b668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x17b66c: 0x2c412001  sltiu       $at, $v0, 0x2001
    ctx->pc = 0x17b66cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8193) ? 1 : 0);
    // 0x17b670: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x17B670u;
    {
        const bool branch_taken_0x17b670 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B670u;
        // 0x17b674: 0x35220004  ori         $v0, $t1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b670) {
            ctx->pc = 0x17B680u;
            goto label_17b680;
        }
    }
    ctx->pc = 0x17B678u;
    // 0x17b678: 0x304900ff  andi        $t1, $v0, 0xFF
    ctx->pc = 0x17b678u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17b67c: 0x0  nop
    ctx->pc = 0x17b67cu;
    // NOP
label_17b680:
    // 0x17b680: 0x8c650024  lw          $a1, 0x24($v1)
    ctx->pc = 0x17b680u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x17b684: 0x8c822c78  lw          $v0, 0x2C78($a0)
    ctx->pc = 0x17b684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11384)));
    // 0x17b688: 0x45082b  sltu        $at, $v0, $a1
    ctx->pc = 0x17b688u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x17b68c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x17B68Cu;
    {
        const bool branch_taken_0x17b68c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B68Cu;
        // 0x17b690: 0x35220010  ori         $v0, $t1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b68c) {
            ctx->pc = 0x17B698u;
            goto label_17b698;
        }
    }
    ctx->pc = 0x17B694u;
    // 0x17b694: 0x304900ff  andi        $t1, $v0, 0xFF
    ctx->pc = 0x17b694u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_17b698:
    // 0x17b698: 0x8c862c7c  lw          $a2, 0x2C7C($a0)
    ctx->pc = 0x17b698u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11388)));
    // 0x17b69c: 0x8c650034  lw          $a1, 0x34($v1)
    ctx->pc = 0x17b69cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x17b6a0: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x17b6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x17b6a4: 0x34428fff  ori         $v0, $v0, 0x8FFF
    ctx->pc = 0x17b6a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36863);
    // 0x17b6a8: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x17b6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x17b6ac: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x17b6acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x17b6b0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17B6B0u;
    {
        const bool branch_taken_0x17b6b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B6B0u;
        // 0x17b6b4: 0x35220010  ori         $v0, $t1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b6b0) {
            ctx->pc = 0x17B6C0u;
            goto label_17b6c0;
        }
    }
    ctx->pc = 0x17B6B8u;
    // 0x17b6b8: 0x304900ff  andi        $t1, $v0, 0xFF
    ctx->pc = 0x17b6b8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17b6bc: 0x0  nop
    ctx->pc = 0x17b6bcu;
    // NOP
label_17b6c0:
    // 0x17b6c0: 0x8065001f  lb          $a1, 0x1F($v1)
    ctx->pc = 0x17b6c0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 31)));
    // 0x17b6c4: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x17b6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x17b6c8: 0x14a20009  bne         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17B6C8u;
    {
        const bool branch_taken_0x17b6c8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x17B6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B6C8u;
        // 0x17b6cc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b6c8) {
            ctx->pc = 0x17B6F0u;
            goto label_17b6f0;
        }
    }
    ctx->pc = 0x17B6D0u;
    // 0x17b6d0: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x17b6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x17b6d4: 0xa062001f  sb          $v0, 0x1F($v1)
    ctx->pc = 0x17b6d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 31), (uint8_t)GPR_U32(ctx, 2));
    // 0x17b6d8: 0xa065001c  sb          $a1, 0x1C($v1)
    ctx->pc = 0x17b6d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 28), (uint8_t)GPR_U32(ctx, 5));
    // 0x17b6dc: 0xa065001d  sb          $a1, 0x1D($v1)
    ctx->pc = 0x17b6dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 29), (uint8_t)GPR_U32(ctx, 5));
    // 0x17b6e0: 0xa065001e  sb          $a1, 0x1E($v1)
    ctx->pc = 0x17b6e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 30), (uint8_t)GPR_U32(ctx, 5));
    // 0x17b6e4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x17B6E4u;
    {
        const bool branch_taken_0x17b6e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B6E4u;
        // 0x17b6e8: 0xac822cbc  sw          $v0, 0x2CBC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 11452), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b6e4) {
            ctx->pc = 0x17B728u;
            goto label_17b728;
        }
    }
    ctx->pc = 0x17B6ECu;
    // 0x17b6ec: 0x0  nop
    ctx->pc = 0x17b6ecu;
    // NOP
label_17b6f0:
    // 0x17b6f0: 0x312200ff  andi        $v0, $t1, 0xFF
    ctx->pc = 0x17b6f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x17b6f4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17B6F4u;
    {
        const bool branch_taken_0x17b6f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17b6f4) {
            ctx->pc = 0x17B708u;
            goto label_17b708;
        }
    }
    ctx->pc = 0x17B6FCu;
    // 0x17b6fc: 0xac852cbc  sw          $a1, 0x2CBC($a0)
    ctx->pc = 0x17b6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11452), GPR_U32(ctx, 5));
    // 0x17b700: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x17B700u;
    {
        const bool branch_taken_0x17b700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B700u;
        // 0x17b704: 0x8062001f  lb          $v0, 0x1F($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 31)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b700) {
            ctx->pc = 0x17B728u;
            goto label_17b728;
        }
    }
    ctx->pc = 0x17B708u;
label_17b708:
    // 0x17b708: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x17b708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17b70c: 0xa062001f  sb          $v0, 0x1F($v1)
    ctx->pc = 0x17b70cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 31), (uint8_t)GPR_U32(ctx, 2));
    // 0x17b710: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x17b710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x17b714: 0xa065001c  sb          $a1, 0x1C($v1)
    ctx->pc = 0x17b714u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 28), (uint8_t)GPR_U32(ctx, 5));
    // 0x17b718: 0xa065001d  sb          $a1, 0x1D($v1)
    ctx->pc = 0x17b718u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 29), (uint8_t)GPR_U32(ctx, 5));
    // 0x17b71c: 0xa065001e  sb          $a1, 0x1E($v1)
    ctx->pc = 0x17b71cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 30), (uint8_t)GPR_U32(ctx, 5));
    // 0x17b720: 0xac822cbc  sw          $v0, 0x2CBC($a0)
    ctx->pc = 0x17b720u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11452), GPR_U32(ctx, 2));
    // 0x17b724: 0x0  nop
    ctx->pc = 0x17b724u;
    // NOP
label_17b728:
    // 0x17b728: 0x3e00008  jr          $ra
    ctx->pc = 0x17B728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B730u;
}
