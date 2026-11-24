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

// Function: sub_0010C278
// Address: 0x10c278 - 0x10c538
void sub_0010C278_0x10c278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010C278_0x10c278");
#endif

    switch (ctx->pc) {
        case 0x10c310u: goto label_10c310;
        case 0x10c4a0u: goto label_10c4a0;
        case 0x10c4acu: goto label_10c4ac;
        case 0x10c4d8u: goto label_10c4d8;
        case 0x10c4e8u: goto label_10c4e8;
        default: break;
    }

    ctx->pc = 0x10c278u;

    // 0x10c278: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x10c278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x10c27c: 0xffb70170  sd          $s7, 0x170($sp)
    ctx->pc = 0x10c27cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 23));
    // 0x10c280: 0xffb60160  sd          $s6, 0x160($sp)
    ctx->pc = 0x10c280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 22));
    // 0x10c284: 0xffb50150  sd          $s5, 0x150($sp)
    ctx->pc = 0x10c284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 21));
    // 0x10c288: 0xffb30130  sd          $s3, 0x130($sp)
    ctx->pc = 0x10c288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 19));
    // 0x10c28c: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x10c28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x10c290: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x10c290u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c294: 0xffbf0180  sd          $ra, 0x180($sp)
    ctx->pc = 0x10c294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 31));
    // 0x10c298: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10c298u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c29c: 0xffb10110  sd          $s1, 0x110($sp)
    ctx->pc = 0x10c29cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 17));
    // 0x10c2a0: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x10c2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x10c2a4: 0xffb40140  sd          $s4, 0x140($sp)
    ctx->pc = 0x10c2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 20));
    // 0x10c2a8: 0x8e540868  lw          $s4, 0x868($s2)
    ctx->pc = 0x10c2a8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2152)));
    // 0x10c2ac: 0x8e42008c  lw          $v0, 0x8C($s2)
    ctx->pc = 0x10c2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x10c2b0: 0x26950010  addiu       $s5, $s4, 0x10
    ctx->pc = 0x10c2b0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x10c2b4: 0x26960018  addiu       $s6, $s4, 0x18
    ctx->pc = 0x10c2b4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
    // 0x10c2b8: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x10C2B8u;
    {
        const bool branch_taken_0x10c2b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C2B8u;
        // 0x10c2bc: 0x26970020  addiu       $s7, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c2b8) {
            ctx->pc = 0x10C348u;
            goto label_10c348;
        }
    }
    ctx->pc = 0x10C2C0u;
    // 0x10c2c0: 0xde630018  ld          $v1, 0x18($s3)
    ctx->pc = 0x10c2c0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x10c2c4: 0x4630022  bgezl       $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x10C2C4u;
    {
        const bool branch_taken_0x10c2c4 = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x10c2c4) {
            ctx->pc = 0x10C2C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C2C4u;
            // 0x10c2c8: 0xfea30000  sd          $v1, 0x0($s5) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10C350u;
            goto label_10c350;
        }
    }
    ctx->pc = 0x10C2CCu;
    // 0x10c2cc: 0x8e420098  lw          $v0, 0x98($s2)
    ctx->pc = 0x10c2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x10c2d0: 0x442001f  bltzl       $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x10C2D0u;
    {
        const bool branch_taken_0x10c2d0 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x10c2d0) {
            ctx->pc = 0x10C2D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C2D0u;
            // 0x10c2d4: 0xfea30000  sd          $v1, 0x0($s5) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10C350u;
            goto label_10c350;
        }
    }
    ctx->pc = 0x10C2D8u;
    // 0x10c2d8: 0xde4500a0  ld          $a1, 0xA0($s2)
    ctx->pc = 0x10c2d8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x10c2dc: 0x8e50009c  lw          $s0, 0x9C($s2)
    ctx->pc = 0x10c2dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x10c2e0: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x10c2e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x10c2e4: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x10c2e4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x10c2e8: 0xde440090  ld          $a0, 0x90($s2)
    ctx->pc = 0x10c2e8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x10c2ec: 0x30b10001  andi        $s1, $a1, 0x1
    ctx->pc = 0x10c2ecu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x10c2f0: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x10c2f0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x10c2f4: 0x2308024  and         $s0, $s1, $s0
    ctx->pc = 0x10c2f4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & GPR_U64(ctx, 16));
    // 0x10c2f8: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x10c2f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x10c2fc: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x10c2fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x10c300: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x10c300u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x10c304: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x10c304u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x10c308: 0xc04b098  jal         func_12C260
    ctx->pc = 0x10C308u;
    SET_GPR_U32(ctx, 31, 0x10C310u);
    ctx->pc = 0x10C30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C308u;
    // 0x10c30c: 0xa0282d  daddu       $a1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C260u, 0x10C308u, 0x10C310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C310u;
label_10c310:
    // 0x10c310: 0x217f8  dsll        $v0, $v0, 31
    ctx->pc = 0x10c310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 31);
    // 0x10c314: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x10c314u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x10c318: 0x8e430098  lw          $v1, 0x98($s2)
    ctx->pc = 0x10c318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x10c31c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x10c31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x10c320: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10c320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10c324: 0xfe830010  sd          $v1, 0x10($s4)
    ctx->pc = 0x10c324u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 3));
    // 0x10c328: 0xde420090  ld          $v0, 0x90($s2)
    ctx->pc = 0x10c328u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x10c32c: 0x2228824  and         $s1, $s1, $v0
    ctx->pc = 0x10c32cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x10c330: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x10C330u;
    {
        const bool branch_taken_0x10c330 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C330u;
        // 0x10c334: 0x8e540868  lw          $s4, 0x868($s2) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c330) {
            ctx->pc = 0x10C350u;
            goto label_10c350;
        }
    }
    ctx->pc = 0x10C338u;
    // 0x10c338: 0x8e42009c  lw          $v0, 0x9C($s2)
    ctx->pc = 0x10c338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x10c33c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10c33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10c340: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10C340u;
    {
        const bool branch_taken_0x10c340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C340u;
        // 0x10c344: 0xae42009c  sw          $v0, 0x9C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c340) {
            ctx->pc = 0x10C350u;
            goto label_10c350;
        }
    }
    ctx->pc = 0x10C348u;
label_10c348:
    // 0x10c348: 0xde630018  ld          $v1, 0x18($s3)
    ctx->pc = 0x10c348u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x10c34c: 0xfea30000  sd          $v1, 0x0($s5)
    ctx->pc = 0x10c34cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 3));
label_10c350:
    // 0x10c350: 0x8e430108  lw          $v1, 0x108($s2)
    ctx->pc = 0x10c350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
    // 0x10c354: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x10c354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10c358: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10C358u;
    {
        const bool branch_taken_0x10c358 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x10c358) {
            ctx->pc = 0x10C35Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C358u;
            // 0x10c35c: 0x8e660040  lw          $a2, 0x40($s3) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10C380u;
            goto label_10c380;
        }
    }
    ctx->pc = 0x10C360u;
    // 0x10c360: 0xde420100  ld          $v0, 0x100($s2)
    ctx->pc = 0x10c360u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 256)));
    // 0x10c364: 0x4420006  bltzl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10C364u;
    {
        const bool branch_taken_0x10c364 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x10c364) {
            ctx->pc = 0x10C368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C364u;
            // 0x10c368: 0x8e660040  lw          $a2, 0x40($s3) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10C380u;
            goto label_10c380;
        }
    }
    ctx->pc = 0x10C36Cu;
    // 0x10c36c: 0xfea20000  sd          $v0, 0x0($s5)
    ctx->pc = 0x10c36cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
    // 0x10c370: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10c370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10c374: 0xae400108  sw          $zero, 0x108($s2)
    ctx->pc = 0x10c374u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 264), GPR_U32(ctx, 0));
    // 0x10c378: 0xfe420100  sd          $v0, 0x100($s2)
    ctx->pc = 0x10c378u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 256), GPR_U64(ctx, 2));
    // 0x10c37c: 0x8e660040  lw          $a2, 0x40($s3)
    ctx->pc = 0x10c37cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_10c380:
    // 0x10c380: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x10c380u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x10c384: 0x8e65003c  lw          $a1, 0x3C($s3)
    ctx->pc = 0x10c384u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x10c388: 0x250829c0  addiu       $t0, $t0, 0x29C0
    ctx->pc = 0x10c388u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10688));
    // 0x10c38c: 0x8e620034  lw          $v0, 0x34($s3)
    ctx->pc = 0x10c38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x10c390: 0x63178  dsll        $a2, $a2, 5
    ctx->pc = 0x10c390u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 5);
    // 0x10c394: 0x8e67002c  lw          $a3, 0x2C($s3)
    ctx->pc = 0x10c394u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x10c398: 0x529b8  dsll        $a1, $a1, 6
    ctx->pc = 0x10c398u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 6);
    // 0x10c39c: 0x8e640038  lw          $a0, 0x38($s3)
    ctx->pc = 0x10c39cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x10c3a0: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x10c3a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x10c3a4: 0x8e630030  lw          $v1, 0x30($s3)
    ctx->pc = 0x10c3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x10c3a8: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x10c3a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x10c3ac: 0xde650020  ld          $a1, 0x20($s3)
    ctx->pc = 0x10c3acu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x10c3b0: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x10c3b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x10c3b4: 0x318f8  dsll        $v1, $v1, 3
    ctx->pc = 0x10c3b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 3);
    // 0x10c3b8: 0x421f8  dsll        $a0, $a0, 7
    ctx->pc = 0x10c3b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 7);
    // 0x10c3bc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x10c3bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x10c3c0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x10c3c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x10c3c4: 0xfec50000  sd          $a1, 0x0($s6)
    ctx->pc = 0x10c3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 0), GPR_U64(ctx, 5));
    // 0x10c3c8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x10c3c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x10c3cc: 0xfee20000  sd          $v0, 0x0($s7)
    ctx->pc = 0x10c3ccu;
    WRITE64(ADD32(GPR_U32(ctx, 23), 0), GPR_U64(ctx, 2));
    // 0x10c3d0: 0x8e4500f4  lw          $a1, 0xF4($s2)
    ctx->pc = 0x10c3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 244)));
    // 0x10c3d4: 0xde820020  ld          $v0, 0x20($s4)
    ctx->pc = 0x10c3d4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x10c3d8: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x10c3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x10c3dc: 0x216f8  dsll        $v0, $v0, 27
    ctx->pc = 0x10c3dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 27);
    // 0x10c3e0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x10c3e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x10c3e4: 0xae430098  sw          $v1, 0x98($s2)
    ctx->pc = 0x10c3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 3));
    // 0x10c3e8: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x10c3e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x10c3ec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10c3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x10c3f0: 0x8e63005c  lw          $v1, 0x5C($s3)
    ctx->pc = 0x10c3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
    // 0x10c3f4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x10c3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x10c3f8: 0x9c440000  lwu         $a0, 0x0($v0)
    ctx->pc = 0x10c3f8u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10c3fc: 0xae4300e0  sw          $v1, 0xE0($s2)
    ctx->pc = 0x10c3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 224), GPR_U32(ctx, 3));
    // 0x10c400: 0xfe4400a0  sd          $a0, 0xA0($s2)
    ctx->pc = 0x10c400u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 160), GPR_U64(ctx, 4));
    // 0x10c404: 0x8e620060  lw          $v0, 0x60($s3)
    ctx->pc = 0x10c404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x10c408: 0xae4200e4  sw          $v0, 0xE4($s2)
    ctx->pc = 0x10c408u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 2));
    // 0x10c40c: 0x8e630044  lw          $v1, 0x44($s3)
    ctx->pc = 0x10c40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x10c410: 0xae4300c8  sw          $v1, 0xC8($s2)
    ctx->pc = 0x10c410u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 3));
    // 0x10c414: 0x8e620048  lw          $v0, 0x48($s3)
    ctx->pc = 0x10c414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x10c418: 0xae4200cc  sw          $v0, 0xCC($s2)
    ctx->pc = 0x10c418u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 2));
    // 0x10c41c: 0x8e63004c  lw          $v1, 0x4C($s3)
    ctx->pc = 0x10c41cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x10c420: 0xae4300d0  sw          $v1, 0xD0($s2)
    ctx->pc = 0x10c420u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 3));
    // 0x10c424: 0x8e620050  lw          $v0, 0x50($s3)
    ctx->pc = 0x10c424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x10c428: 0xae4200d4  sw          $v0, 0xD4($s2)
    ctx->pc = 0x10c428u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 2));
    // 0x10c42c: 0x8e630054  lw          $v1, 0x54($s3)
    ctx->pc = 0x10c42cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x10c430: 0xae4300d8  sw          $v1, 0xD8($s2)
    ctx->pc = 0x10c430u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 3));
    // 0x10c434: 0x8e620058  lw          $v0, 0x58($s3)
    ctx->pc = 0x10c434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x10c438: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x10C438u;
    {
        const bool branch_taken_0x10c438 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C438u;
        // 0x10c43c: 0xae4200dc  sw          $v0, 0xDC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c438) {
            ctx->pc = 0x10C464u;
            goto label_10c464;
        }
    }
    ctx->pc = 0x10C440u;
    // 0x10c440: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x10c440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x10c444: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x10c444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x10c448: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x10c448u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x10c44c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x10C44Cu;
    {
        const bool branch_taken_0x10c44c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10C450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C44Cu;
        // 0x10c450: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c44c) {
            ctx->pc = 0x10C47Cu;
            goto label_10c47c;
        }
    }
    ctx->pc = 0x10C454u;
    // 0x10c454: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x10c454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x10c458: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x10c458u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x10c45c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x10C45Cu;
    {
        const bool branch_taken_0x10c45c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C45Cu;
        // 0x10c460: 0x38500001  xori        $s0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c45c) {
            ctx->pc = 0x10C47Cu;
            goto label_10c47c;
        }
    }
    ctx->pc = 0x10C464u;
label_10c464:
    // 0x10c464: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x10c464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x10c468: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x10c468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x10c46c: 0x8e4200f8  lw          $v0, 0xF8($s2)
    ctx->pc = 0x10c46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 248)));
    // 0x10c470: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x10c470u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x10c474: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x10c474u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x10c478: 0x38500001  xori        $s0, $v0, 0x1
    ctx->pc = 0x10c478u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_10c47c:
    // 0x10c47c: 0x5600000e  bnel        $s0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x10C47Cu;
    {
        const bool branch_taken_0x10c47c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x10c47c) {
            ctx->pc = 0x10C480u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C47Cu;
            // 0x10c480: 0x8e630028  lw          $v1, 0x28($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10C4B8u;
            goto label_10c4b8;
        }
    }
    ctx->pc = 0x10C484u;
    // 0x10c484: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x10c484u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x10c488: 0x8e670004  lw          $a3, 0x4($s3)
    ctx->pc = 0x10c488u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x10c48c: 0x8e680008  lw          $t0, 0x8($s3)
    ctx->pc = 0x10c48cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x10c490: 0x24c62318  addiu       $a2, $a2, 0x2318
    ctx->pc = 0x10c490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8984));
    // 0x10c494: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x10c494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c498: 0xc044304  jal         func_110C10
    ctx->pc = 0x10C498u;
    SET_GPR_U32(ctx, 31, 0x10C4A0u);
    ctx->pc = 0x10C49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C498u;
    // 0x10c49c: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110C10u, 0x10C498u, 0x10C4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C4A0u;
label_10c4a0:
    // 0x10c4a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10c4a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c4a4: 0xc043536  jal         func_10D4D8
    ctx->pc = 0x10C4A4u;
    SET_GPR_U32(ctx, 31, 0x10C4ACu);
    ctx->pc = 0x10C4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C4A4u;
    // 0x10c4a8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D4D8u, 0x10C4A4u, 0x10C4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C4ACu;
label_10c4ac:
    // 0x10c4ac: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x10C4ACu;
    {
        const bool branch_taken_0x10c4ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C4ACu;
        // 0x10c4b0: 0xdfbf0180  ld          $ra, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c4ac) {
            ctx->pc = 0x10C510u;
            goto label_10c510;
        }
    }
    ctx->pc = 0x10C4B4u;
    // 0x10c4b4: 0x8e630028  lw          $v1, 0x28($s3)
    ctx->pc = 0x10c4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
label_10c4b8:
    // 0x10c4b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10c4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10c4bc: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x10C4BCu;
    {
        const bool branch_taken_0x10c4bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10C4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C4BCu;
        // 0x10c4c0: 0xdfbf0180  ld          $ra, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c4bc) {
            ctx->pc = 0x10C510u;
            goto label_10c510;
        }
    }
    ctx->pc = 0x10C4C4u;
    // 0x10c4c4: 0x8e4200c4  lw          $v0, 0xC4($s2)
    ctx->pc = 0x10c4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x10c4c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10C4C8u;
    {
        const bool branch_taken_0x10c4c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C4C8u;
        // 0x10c4cc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c4c8) {
            ctx->pc = 0x10C4E0u;
            goto label_10c4e0;
        }
    }
    ctx->pc = 0x10C4D0u;
    // 0x10c4d0: 0xc04331a  jal         func_10CC68
    ctx->pc = 0x10C4D0u;
    SET_GPR_U32(ctx, 31, 0x10C4D8u);
    ctx->pc = 0x10C4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C4D0u;
    // 0x10c4d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC68u, 0x10C4D0u, 0x10C4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C4D8u;
label_10c4d8:
    // 0x10c4d8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10C4D8u;
    {
        const bool branch_taken_0x10c4d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C4D8u;
        // 0x10c4dc: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c4d8) {
            ctx->pc = 0x10C4ECu;
            goto label_10c4ec;
        }
    }
    ctx->pc = 0x10C4E0u;
label_10c4e0:
    // 0x10c4e0: 0xc042ffa  jal         func_10BFE8
    ctx->pc = 0x10C4E0u;
    SET_GPR_U32(ctx, 31, 0x10C4E8u);
    ctx->pc = 0x10C4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C4E0u;
    // 0x10c4e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BFE8u, 0x10C4E0u, 0x10C4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C4E8u;
label_10c4e8:
    // 0x10c4e8: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x10c4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_10c4ec:
    // 0x10c4ec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x10c4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10c4f0: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10C4F0u;
    {
        const bool branch_taken_0x10c4f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x10C4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C4F0u;
        // 0x10c4f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c4f0) {
            ctx->pc = 0x10C508u;
            goto label_10c508;
        }
    }
    ctx->pc = 0x10C4F8u;
    // 0x10c4f8: 0x8e420128  lw          $v0, 0x128($s2)
    ctx->pc = 0x10c4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 296)));
    // 0x10c4fc: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x10c4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    // 0x10c500: 0xae4200c0  sw          $v0, 0xC0($s2)
    ctx->pc = 0x10c500u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 2));
    // 0x10c504: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10c504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10c508:
    // 0x10c508: 0xae420834  sw          $v0, 0x834($s2)
    ctx->pc = 0x10c508u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2100), GPR_U32(ctx, 2));
    // 0x10c50c: 0xdfbf0180  ld          $ra, 0x180($sp)
    ctx->pc = 0x10c50cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 384)));
label_10c510:
    // 0x10c510: 0xdfb70170  ld          $s7, 0x170($sp)
    ctx->pc = 0x10c510u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x10c514: 0xdfb60160  ld          $s6, 0x160($sp)
    ctx->pc = 0x10c514u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x10c518: 0xdfb50150  ld          $s5, 0x150($sp)
    ctx->pc = 0x10c518u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x10c51c: 0xdfb40140  ld          $s4, 0x140($sp)
    ctx->pc = 0x10c51cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x10c520: 0xdfb30130  ld          $s3, 0x130($sp)
    ctx->pc = 0x10c520u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x10c524: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x10c524u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x10c528: 0xdfb10110  ld          $s1, 0x110($sp)
    ctx->pc = 0x10c528u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x10c52c: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x10c52cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x10c530: 0x3e00008  jr          $ra
    ctx->pc = 0x10C530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C530u;
        // 0x10c534: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C538u;
}
