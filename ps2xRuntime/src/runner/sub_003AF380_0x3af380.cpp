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

// Function: sub_003AF380
// Address: 0x3af380 - 0x3af77c
void sub_003AF380_0x3af380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AF380_0x3af380");
#endif

    switch (ctx->pc) {
        case 0x3af3e0u: goto label_3af3e0;
        case 0x3af418u: goto label_3af418;
        case 0x3af428u: goto label_3af428;
        case 0x3af468u: goto label_3af468;
        case 0x3af478u: goto label_3af478;
        case 0x3af4d4u: goto label_3af4d4;
        case 0x3af56cu: goto label_3af56c;
        case 0x3af5b0u: goto label_3af5b0;
        case 0x3af5c0u: goto label_3af5c0;
        case 0x3af5f4u: goto label_3af5f4;
        case 0x3af600u: goto label_3af600;
        case 0x3af670u: goto label_3af670;
        case 0x3af720u: goto label_3af720;
        case 0x3af754u: goto label_3af754;
        case 0x3af760u: goto label_3af760;
        default: break;
    }

    ctx->pc = 0x3af380u;

    // 0x3af380: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3af380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x3af384: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3af384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3af388: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3af388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3af38c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3af38cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3af390: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3af390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3af394: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3af394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3af398: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3af398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3af39c: 0x90860521  lbu         $a2, 0x521($a0)
    ctx->pc = 0x3af39cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1313)));
    // 0x3af3a0: 0x10c3002d  beq         $a2, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x3AF3A0u;
    {
        const bool branch_taken_0x3af3a0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x3AF3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF3A0u;
        // 0x3af3a4: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af3a0) {
            ctx->pc = 0x3AF458u;
            goto label_3af458;
        }
    }
    ctx->pc = 0x3AF3A8u;
    // 0x3af3a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3af3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3af3ac: 0x10c30022  beq         $a2, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x3AF3ACu;
    {
        const bool branch_taken_0x3af3ac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x3af3ac) {
            ctx->pc = 0x3AF438u;
            goto label_3af438;
        }
    }
    ctx->pc = 0x3AF3B4u;
    // 0x3af3b4: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AF3B4u;
    {
        const bool branch_taken_0x3af3b4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3af3b4) {
            ctx->pc = 0x3AF3C8u;
            goto label_3af3c8;
        }
    }
    ctx->pc = 0x3AF3BCu;
    // 0x3af3bc: 0x100000e8  b           . + 4 + (0xE8 << 2)
    ctx->pc = 0x3AF3BCu;
    {
        const bool branch_taken_0x3af3bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3af3bc) {
            ctx->pc = 0x3AF760u;
            goto label_3af760;
        }
    }
    ctx->pc = 0x3AF3C4u;
    // 0x3af3c4: 0x0  nop
    ctx->pc = 0x3af3c4u;
    // NOP
label_3af3c8:
    // 0x3af3c8: 0x10a00015  beqz        $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x3AF3C8u;
    {
        const bool branch_taken_0x3af3c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3af3c8) {
            ctx->pc = 0x3AF420u;
            goto label_3af420;
        }
    }
    ctx->pc = 0x3AF3D0u;
    // 0x3af3d0: 0x9264053b  lbu         $a0, 0x53B($s3)
    ctx->pc = 0x3af3d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1339)));
    // 0x3af3d4: 0x9265052e  lbu         $a1, 0x52E($s3)
    ctx->pc = 0x3af3d4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1326)));
    // 0x3af3d8: 0xc0aa3ac  jal         func_2A8EB0
    ctx->pc = 0x3AF3D8u;
    SET_GPR_U32(ctx, 31, 0x3AF3E0u);
    ctx->pc = 0x3AF3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF3D8u;
    // 0x3af3dc: 0x26660020  addiu       $a2, $s3, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8EB0u, 0x3AF3D8u, 0x3AF3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF3E0u;
label_3af3e0:
    // 0x3af3e0: 0xae620550  sw          $v0, 0x550($s3)
    ctx->pc = 0x3af3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1360), GPR_U32(ctx, 2));
    // 0x3af3e4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3af3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3af3e8: 0x9263052e  lbu         $v1, 0x52E($s3)
    ctx->pc = 0x3af3e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1326)));
    // 0x3af3ec: 0x3c021f00  lui         $v0, 0x1F00
    ctx->pc = 0x3af3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7936 << 16));
    // 0x3af3f0: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3af3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3af3f4: 0x34455702  ori         $a1, $v0, 0x5702
    ctx->pc = 0x3af3f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22274);
    // 0x3af3f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3af3f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af3fc: 0x26670020  addiu       $a3, $s3, 0x20
    ctx->pc = 0x3af3fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x3af400: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3af400u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af404: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3af404u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af408: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3af408u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af40c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3af40cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af410: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3AF410u;
    SET_GPR_U32(ctx, 31, 0x3AF418u);
    ctx->pc = 0x3AF414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF410u;
    // 0x3af414: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3AF410u, 0x3AF418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF418u;
label_3af418:
    // 0x3af418: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3AF418u;
    {
        const bool branch_taken_0x3af418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3af418) {
            ctx->pc = 0x3AF428u;
            goto label_3af428;
        }
    }
    ctx->pc = 0x3AF420u;
label_3af420:
    // 0x3af420: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3AF420u;
    SET_GPR_U32(ctx, 31, 0x3AF428u);
    ctx->pc = 0x3AF424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF420u;
    // 0x3af424: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3AF420u, 0x3AF428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF428u;
label_3af428:
    // 0x3af428: 0x92630521  lbu         $v1, 0x521($s3)
    ctx->pc = 0x3af428u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1313)));
    // 0x3af42c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3af42cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3af430: 0x100000cb  b           . + 4 + (0xCB << 2)
    ctx->pc = 0x3AF430u;
    {
        const bool branch_taken_0x3af430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF430u;
        // 0x3af434: 0xa2630521  sb          $v1, 0x521($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af430) {
            ctx->pc = 0x3AF760u;
            goto label_3af760;
        }
    }
    ctx->pc = 0x3AF438u;
label_3af438:
    // 0x3af438: 0x86620526  lh          $v0, 0x526($s3)
    ctx->pc = 0x3af438u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1318)));
    // 0x3af43c: 0xa6620512  sh          $v0, 0x512($s3)
    ctx->pc = 0x3af43cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x3af440: 0xa6600510  sh          $zero, 0x510($s3)
    ctx->pc = 0x3af440u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x3af444: 0xa2600514  sb          $zero, 0x514($s3)
    ctx->pc = 0x3af444u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x3af448: 0xa2600515  sb          $zero, 0x515($s3)
    ctx->pc = 0x3af448u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x3af44c: 0x92620521  lbu         $v0, 0x521($s3)
    ctx->pc = 0x3af44cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1313)));
    // 0x3af450: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3af450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3af454: 0xa2620521  sb          $v0, 0x521($s3)
    ctx->pc = 0x3af454u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1313), (uint8_t)GPR_U32(ctx, 2));
label_3af458:
    // 0x3af458: 0x8e660550  lw          $a2, 0x550($s3)
    ctx->pc = 0x3af458u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1360)));
    // 0x3af45c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3af45cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af460: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x3AF460u;
    SET_GPR_U32(ctx, 31, 0x3AF468u);
    ctx->pc = 0x3AF464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF460u;
    // 0x3af464: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x3AF460u, 0x3AF468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF468u;
label_3af468:
    // 0x3af468: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AF468u;
    {
        const bool branch_taken_0x3af468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AF46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF468u;
        // 0x3af46c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af468) {
            ctx->pc = 0x3AF478u;
            goto label_3af478;
        }
    }
    ctx->pc = 0x3AF470u;
    // 0x3af470: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3AF470u;
    SET_GPR_U32(ctx, 31, 0x3AF478u);
    ctx->pc = 0x3AF474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF470u;
    // 0x3af474: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3AF470u, 0x3AF478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF478u;
label_3af478:
    // 0x3af478: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3af478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3af47c: 0x78235c20  lq          $v1, 0x5C20($at)
    ctx->pc = 0x3af47cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C20u));
    // 0x3af480: 0x27b20070  addiu       $s2, $sp, 0x70
    ctx->pc = 0x3af480u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3af484: 0x27b10080  addiu       $s1, $sp, 0x80
    ctx->pc = 0x3af484u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3af488: 0x27b00090  addiu       $s0, $sp, 0x90
    ctx->pc = 0x3af488u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3af48c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3af48cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af490: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3af490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3af494: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3af494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3af498: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x3af498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
    // 0x3af49c: 0x78225c30  lq          $v0, 0x5C30($at)
    ctx->pc = 0x3af49cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C30u));
    // 0x3af4a0: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x3af4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x3af4a4: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3af4a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3af4a8: 0x78225c40  lq          $v0, 0x5C40($at)
    ctx->pc = 0x3af4a8u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C40u));
    // 0x3af4ac: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x3af4acu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x3af4b0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3af4b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3af4b4: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x3af4b4u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x3af4b8: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x3af4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x3af4bc: 0x7a620020  lq          $v0, 0x20($s3)
    ctx->pc = 0x3af4bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x3af4c0: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x3af4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x3af4c4: 0x92660560  lbu         $a2, 0x560($s3)
    ctx->pc = 0x3af4c4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1376)));
    // 0x3af4c8: 0xc66c055c  lwc1        $f12, 0x55C($s3)
    ctx->pc = 0x3af4c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3af4cc: 0xc0c0960  jal         func_302580
    ctx->pc = 0x3AF4CCu;
    SET_GPR_U32(ctx, 31, 0x3AF4D4u);
    ctx->pc = 0x3AF4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF4CCu;
    // 0x3af4d0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302580u, 0x3AF4CCu, 0x3AF4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF4D4u;
label_3af4d4:
    // 0x3af4d4: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x3AF4D4u;
    {
        const bool branch_taken_0x3af4d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3af4d4) {
            ctx->pc = 0x3AF608u;
            goto label_3af608;
        }
    }
    ctx->pc = 0x3AF4DCu;
    // 0x3af4dc: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x3af4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3af4e0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3af4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3af4e4: 0x34450dcd  ori         $a1, $v0, 0xDCD
    ctx->pc = 0x3af4e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x3af4e8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3af4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3af4ec: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x3af4ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3af4f0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3af4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3af4f4: 0xaf8380e0  sw          $v1, -0x7F20($gp)
    ctx->pc = 0x3af4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 3));
    // 0x3af4f8: 0x8f8480e0  lw          $a0, -0x7F20($gp)
    ctx->pc = 0x3af4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3af4fc: 0x41b02  srl         $v1, $a0, 12
    ctx->pc = 0x3af4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 12));
    // 0x3af500: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x3af500u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x3af504: 0x0  nop
    ctx->pc = 0x3af504u;
    // NOP
    // 0x3af508: 0x0  nop
    ctx->pc = 0x3af508u;
    // NOP
    // 0x3af50c: 0x1010  mfhi        $v0
    ctx->pc = 0x3af50cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3af510: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x3AF510u;
    {
        const bool branch_taken_0x3af510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AF514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF510u;
        // 0x3af514: 0x851018  mult        $v0, $a0, $a1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af510) {
            ctx->pc = 0x3AF5B0u;
            goto label_3af5b0;
        }
    }
    ctx->pc = 0x3AF518u;
    // 0x3af518: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3af518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3af51c: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x3af51cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x3af520: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x3af520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3af524: 0x31302  srl         $v0, $v1, 12
    ctx->pc = 0x3af524u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
    // 0x3af528: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3af528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3af52c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3AF52Cu;
    {
        const bool branch_taken_0x3af52c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3af52c) {
            ctx->pc = 0x3AF578u;
            goto label_3af578;
        }
    }
    ctx->pc = 0x3AF534u;
    // 0x3af534: 0x651018  mult        $v0, $v1, $a1
    ctx->pc = 0x3af534u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3af538: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3af538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3af53c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3af53cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3af540: 0x26670020  addiu       $a3, $s3, 0x20
    ctx->pc = 0x3af540u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x3af544: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3af544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3af548: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x3af548u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x3af54c: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x3af54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3af550: 0x9265052e  lbu         $a1, 0x52E($s3)
    ctx->pc = 0x3af550u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1326)));
    // 0x3af554: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x3af554u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x3af558: 0x3042003c  andi        $v0, $v0, 0x3C
    ctx->pc = 0x3af558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)60);
    // 0x3af55c: 0x24420294  addiu       $v0, $v0, 0x294
    ctx->pc = 0x3af55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 660));
    // 0x3af560: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x3af560u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3af564: 0xc0aa590  jal         func_2A9640
    ctx->pc = 0x3AF564u;
    SET_GPR_U32(ctx, 31, 0x3AF56Cu);
    ctx->pc = 0x3AF568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF564u;
    // 0x3af568: 0x8443f  dsra32      $t0, $t0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9640u, 0x3AF564u, 0x3AF56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF56Cu;
label_3af56c:
    // 0x3af56c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3AF56Cu;
    {
        const bool branch_taken_0x3af56c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3af56c) {
            ctx->pc = 0x3AF5B0u;
            goto label_3af5b0;
        }
    }
    ctx->pc = 0x3AF574u;
    // 0x3af574: 0x0  nop
    ctx->pc = 0x3af574u;
    // NOP
label_3af578:
    // 0x3af578: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3af578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3af57c: 0x651018  mult        $v0, $v1, $a1
    ctx->pc = 0x3af57cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3af580: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3af580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3af584: 0x26670020  addiu       $a3, $s3, 0x20
    ctx->pc = 0x3af584u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x3af588: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3af588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3af58c: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x3af58cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x3af590: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x3af590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3af594: 0x9265052e  lbu         $a1, 0x52E($s3)
    ctx->pc = 0x3af594u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1326)));
    // 0x3af598: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x3af598u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x3af59c: 0x3042003c  andi        $v0, $v0, 0x3C
    ctx->pc = 0x3af59cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)60);
    // 0x3af5a0: 0x24420294  addiu       $v0, $v0, 0x294
    ctx->pc = 0x3af5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 660));
    // 0x3af5a4: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x3af5a4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3af5a8: 0xc0aa590  jal         func_2A9640
    ctx->pc = 0x3AF5A8u;
    SET_GPR_U32(ctx, 31, 0x3AF5B0u);
    ctx->pc = 0x3AF5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF5A8u;
    // 0x3af5ac: 0x8443f  dsra32      $t0, $t0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9640u, 0x3AF5A8u, 0x3AF5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF5B0u;
label_3af5b0:
    // 0x3af5b0: 0x9264053b  lbu         $a0, 0x53B($s3)
    ctx->pc = 0x3af5b0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1339)));
    // 0x3af5b4: 0x9265052e  lbu         $a1, 0x52E($s3)
    ctx->pc = 0x3af5b4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1326)));
    // 0x3af5b8: 0xc0aa3bc  jal         func_2A8EF0
    ctx->pc = 0x3AF5B8u;
    SET_GPR_U32(ctx, 31, 0x3AF5C0u);
    ctx->pc = 0x3AF5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF5B8u;
    // 0x3af5bc: 0x26660020  addiu       $a2, $s3, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8EF0u, 0x3AF5B8u, 0x3AF5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF5C0u;
label_3af5c0:
    // 0x3af5c0: 0x9263052e  lbu         $v1, 0x52E($s3)
    ctx->pc = 0x3af5c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1326)));
    // 0x3af5c4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3af5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3af5c8: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x3af5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x3af5cc: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3af5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3af5d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3af5d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af5d4: 0x34455702  ori         $a1, $v0, 0x5702
    ctx->pc = 0x3af5d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22274);
    // 0x3af5d8: 0x26670020  addiu       $a3, $s3, 0x20
    ctx->pc = 0x3af5d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x3af5dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3af5dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af5e0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3af5e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af5e4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3af5e4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af5e8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3af5e8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af5ec: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3AF5ECu;
    SET_GPR_U32(ctx, 31, 0x3AF5F4u);
    ctx->pc = 0x3AF5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF5ECu;
    // 0x3af5f0: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3AF5ECu, 0x3AF5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF5F4u;
label_3af5f4:
    // 0x3af5f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3af5f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af5f8: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3AF5F8u;
    SET_GPR_U32(ctx, 31, 0x3AF600u);
    ctx->pc = 0x3AF5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF5F8u;
    // 0x3af5fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3AF5F8u, 0x3AF600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF600u;
label_3af600:
    // 0x3af600: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x3AF600u;
    {
        const bool branch_taken_0x3af600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3af600) {
            ctx->pc = 0x3AF760u;
            goto label_3af760;
        }
    }
    ctx->pc = 0x3AF608u;
label_3af608:
    // 0x3af608: 0x86630510  lh          $v1, 0x510($s3)
    ctx->pc = 0x3af608u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1296)));
    // 0x3af60c: 0x4600018  bltz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x3AF60Cu;
    {
        const bool branch_taken_0x3af60c = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x3AF610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF60Cu;
        // 0x3af610: 0x28617531  slti        $at, $v1, 0x7531 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)30001) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af60c) {
            ctx->pc = 0x3AF670u;
            goto label_3af670;
        }
    }
    ctx->pc = 0x3AF614u;
    // 0x3af614: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x3AF614u;
    {
        const bool branch_taken_0x3af614 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3af614) {
            ctx->pc = 0x3AF670u;
            goto label_3af670;
        }
    }
    ctx->pc = 0x3AF61Cu;
    // 0x3af61c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3af61cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3af620: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3af620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af624: 0x78235c20  lq          $v1, 0x5C20($at)
    ctx->pc = 0x3af624u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C20u));
    // 0x3af628: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3af628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3af62c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3af62cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af630: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3af630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3af634: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x3af634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
    // 0x3af638: 0x78225c30  lq          $v0, 0x5C30($at)
    ctx->pc = 0x3af638u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C30u));
    // 0x3af63c: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x3af63cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x3af640: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3af640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3af644: 0x78225c40  lq          $v0, 0x5C40($at)
    ctx->pc = 0x3af644u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C40u));
    // 0x3af648: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x3af648u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x3af64c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3af64cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3af650: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x3af650u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x3af654: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x3af654u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x3af658: 0x7a620020  lq          $v0, 0x20($s3)
    ctx->pc = 0x3af658u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x3af65c: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x3af65cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x3af660: 0x92660558  lbu         $a2, 0x558($s3)
    ctx->pc = 0x3af660u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1368)));
    // 0x3af664: 0xc66c0554  lwc1        $f12, 0x554($s3)
    ctx->pc = 0x3af664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3af668: 0xc0c0900  jal         func_302400
    ctx->pc = 0x3AF668u;
    SET_GPR_U32(ctx, 31, 0x3AF670u);
    ctx->pc = 0x3AF66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF668u;
    // 0x3af66c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x3AF668u, 0x3AF670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF670u;
label_3af670:
    // 0x3af670: 0x92630515  lbu         $v1, 0x515($s3)
    ctx->pc = 0x3af670u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1301)));
    // 0x3af674: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AF674u;
    {
        const bool branch_taken_0x3af674 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF674u;
        // 0x3af678: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af674) {
            ctx->pc = 0x3AF688u;
            goto label_3af688;
        }
    }
    ctx->pc = 0x3AF67Cu;
    // 0x3af67c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3AF67Cu;
    {
        const bool branch_taken_0x3af67c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3af67c) {
            ctx->pc = 0x3AF708u;
            goto label_3af708;
        }
    }
    ctx->pc = 0x3AF684u;
    // 0x3af684: 0x0  nop
    ctx->pc = 0x3af684u;
    // NOP
label_3af688:
    // 0x3af688: 0x86640510  lh          $a0, 0x510($s3)
    ctx->pc = 0x3af688u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1296)));
    // 0x3af68c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3af68cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3af690: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3af690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3af694: 0xa6640510  sh          $a0, 0x510($s3)
    ctx->pc = 0x3af694u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3af698: 0x86640512  lh          $a0, 0x512($s3)
    ctx->pc = 0x3af698u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1298)));
    // 0x3af69c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3AF69Cu;
    {
        const bool branch_taken_0x3af69c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3af69c) {
            ctx->pc = 0x3AF6D8u;
            goto label_3af6d8;
        }
    }
    ctx->pc = 0x3AF6A4u;
    // 0x3af6a4: 0x86650510  lh          $a1, 0x510($s3)
    ctx->pc = 0x3af6a4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1296)));
    // 0x3af6a8: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x3af6a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x3af6ac: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3AF6ACu;
    {
        const bool branch_taken_0x3af6ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AF6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF6ACu;
        // 0x3af6b0: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af6ac) {
            ctx->pc = 0x3AF700u;
            goto label_3af700;
        }
    }
    ctx->pc = 0x3AF6B4u;
    // 0x3af6b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3af6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3af6b8: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3af6b8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3af6bc: 0x0  nop
    ctx->pc = 0x3af6bcu;
    // NOP
    // 0x3af6c0: 0x0  nop
    ctx->pc = 0x3af6c0u;
    // NOP
    // 0x3af6c4: 0x2010  mfhi        $a0
    ctx->pc = 0x3af6c4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3af6c8: 0xa6640510  sh          $a0, 0x510($s3)
    ctx->pc = 0x3af6c8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3af6cc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3AF6CCu;
    {
        const bool branch_taken_0x3af6cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF6CCu;
        // 0x3af6d0: 0xa2630514  sb          $v1, 0x514($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af6cc) {
            ctx->pc = 0x3AF700u;
            goto label_3af700;
        }
    }
    ctx->pc = 0x3AF6D4u;
    // 0x3af6d4: 0x0  nop
    ctx->pc = 0x3af6d4u;
    // NOP
label_3af6d8:
    // 0x3af6d8: 0x86630510  lh          $v1, 0x510($s3)
    ctx->pc = 0x3af6d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1296)));
    // 0x3af6dc: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3af6dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3af6e0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3AF6E0u;
    {
        const bool branch_taken_0x3af6e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3af6e0) {
            ctx->pc = 0x3AF700u;
            goto label_3af700;
        }
    }
    ctx->pc = 0x3AF6E8u;
    // 0x3af6e8: 0xa6640510  sh          $a0, 0x510($s3)
    ctx->pc = 0x3af6e8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3af6ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3af6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3af6f0: 0xa2630515  sb          $v1, 0x515($s3)
    ctx->pc = 0x3af6f0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x3af6f4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3AF6F4u;
    {
        const bool branch_taken_0x3af6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF6F4u;
        // 0x3af6f8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af6f4) {
            ctx->pc = 0x3AF708u;
            goto label_3af708;
        }
    }
    ctx->pc = 0x3AF6FCu;
    // 0x3af6fc: 0x0  nop
    ctx->pc = 0x3af6fcu;
    // NOP
label_3af700:
    // 0x3af700: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3af700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3af704: 0x0  nop
    ctx->pc = 0x3af704u;
    // NOP
label_3af708:
    // 0x3af708: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x3AF708u;
    {
        const bool branch_taken_0x3af708 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3af708) {
            ctx->pc = 0x3AF760u;
            goto label_3af760;
        }
    }
    ctx->pc = 0x3AF710u;
    // 0x3af710: 0x9264053b  lbu         $a0, 0x53B($s3)
    ctx->pc = 0x3af710u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1339)));
    // 0x3af714: 0x9265052e  lbu         $a1, 0x52E($s3)
    ctx->pc = 0x3af714u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1326)));
    // 0x3af718: 0xc0aa3bc  jal         func_2A8EF0
    ctx->pc = 0x3AF718u;
    SET_GPR_U32(ctx, 31, 0x3AF720u);
    ctx->pc = 0x3AF71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF718u;
    // 0x3af71c: 0x26660020  addiu       $a2, $s3, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8EF0u, 0x3AF718u, 0x3AF720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF720u;
label_3af720:
    // 0x3af720: 0x9263052e  lbu         $v1, 0x52E($s3)
    ctx->pc = 0x3af720u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1326)));
    // 0x3af724: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3af724u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3af728: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x3af728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x3af72c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3af72cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3af730: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3af730u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af734: 0x34455702  ori         $a1, $v0, 0x5702
    ctx->pc = 0x3af734u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22274);
    // 0x3af738: 0x26670020  addiu       $a3, $s3, 0x20
    ctx->pc = 0x3af738u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x3af73c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3af73cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af740: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3af740u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af744: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3af744u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af748: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3af748u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af74c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3AF74Cu;
    SET_GPR_U32(ctx, 31, 0x3AF754u);
    ctx->pc = 0x3AF750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF74Cu;
    // 0x3af750: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3AF74Cu, 0x3AF754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF754u;
label_3af754:
    // 0x3af754: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3af754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af758: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3AF758u;
    SET_GPR_U32(ctx, 31, 0x3AF760u);
    ctx->pc = 0x3AF75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF758u;
    // 0x3af75c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3AF758u, 0x3AF760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF760u;
label_3af760:
    // 0x3af760: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3af760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3af764: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3af764u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3af768: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3af768u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3af76c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3af76cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3af770: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3af770u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3af774: 0x3e00008  jr          $ra
    ctx->pc = 0x3AF774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AF778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF774u;
        // 0x3af778: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AF774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AF77Cu;
}
