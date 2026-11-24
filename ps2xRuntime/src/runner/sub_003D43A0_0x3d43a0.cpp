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

// Function: sub_003D43A0
// Address: 0x3d43a0 - 0x3d45f0
void sub_003D43A0_0x3d43a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D43A0_0x3d43a0");
#endif

    switch (ctx->pc) {
        case 0x3d43f0u: goto label_3d43f0;
        case 0x3d4428u: goto label_3d4428;
        case 0x3d4438u: goto label_3d4438;
        case 0x3d448cu: goto label_3d448c;
        case 0x3d449cu: goto label_3d449c;
        case 0x3d44acu: goto label_3d44ac;
        case 0x3d4508u: goto label_3d4508;
        case 0x3d4520u: goto label_3d4520;
        case 0x3d452cu: goto label_3d452c;
        case 0x3d45e0u: goto label_3d45e0;
        default: break;
    }

    ctx->pc = 0x3d43a0u;

    // 0x3d43a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3d43a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3d43a4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3d43a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3d43a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3d43a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3d43ac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3d43acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3d43b0: 0x90860521  lbu         $a2, 0x521($a0)
    ctx->pc = 0x3d43b0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1313)));
    // 0x3d43b4: 0x10c3002c  beq         $a2, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x3D43B4u;
    {
        const bool branch_taken_0x3d43b4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x3D43B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D43B4u;
        // 0x3d43b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d43b4) {
            ctx->pc = 0x3D4468u;
            goto label_3d4468;
        }
    }
    ctx->pc = 0x3D43BCu;
    // 0x3d43bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d43bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d43c0: 0x10c30021  beq         $a2, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x3D43C0u;
    {
        const bool branch_taken_0x3d43c0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x3d43c0) {
            ctx->pc = 0x3D4448u;
            goto label_3d4448;
        }
    }
    ctx->pc = 0x3D43C8u;
    // 0x3d43c8: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D43C8u;
    {
        const bool branch_taken_0x3d43c8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d43c8) {
            ctx->pc = 0x3D43D8u;
            goto label_3d43d8;
        }
    }
    ctx->pc = 0x3D43D0u;
    // 0x3d43d0: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x3D43D0u;
    {
        const bool branch_taken_0x3d43d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d43d0) {
            ctx->pc = 0x3D45E0u;
            goto label_3d45e0;
        }
    }
    ctx->pc = 0x3D43D8u;
label_3d43d8:
    // 0x3d43d8: 0x10a00015  beqz        $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x3D43D8u;
    {
        const bool branch_taken_0x3d43d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d43d8) {
            ctx->pc = 0x3D4430u;
            goto label_3d4430;
        }
    }
    ctx->pc = 0x3D43E0u;
    // 0x3d43e0: 0x9204053b  lbu         $a0, 0x53B($s0)
    ctx->pc = 0x3d43e0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
    // 0x3d43e4: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x3d43e4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x3d43e8: 0xc0aab18  jal         func_2AAC60
    ctx->pc = 0x3D43E8u;
    SET_GPR_U32(ctx, 31, 0x3D43F0u);
    ctx->pc = 0x3D43ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D43E8u;
    // 0x3d43ec: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAC60u, 0x3D43E8u, 0x3D43F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D43F0u;
label_3d43f0:
    // 0x3d43f0: 0xae020550  sw          $v0, 0x550($s0)
    ctx->pc = 0x3d43f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 2));
    // 0x3d43f4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3d43f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3d43f8: 0x9203052e  lbu         $v1, 0x52E($s0)
    ctx->pc = 0x3d43f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x3d43fc: 0x3c022600  lui         $v0, 0x2600
    ctx->pc = 0x3d43fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9728 << 16));
    // 0x3d4400: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3d4400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3d4404: 0x34455802  ori         $a1, $v0, 0x5802
    ctx->pc = 0x3d4404u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22530);
    // 0x3d4408: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3d4408u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d440c: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x3d440cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3d4410: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3d4410u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d4414: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3d4414u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d4418: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3d4418u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d441c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3d441cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d4420: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3D4420u;
    SET_GPR_U32(ctx, 31, 0x3D4428u);
    ctx->pc = 0x3D4424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4420u;
    // 0x3d4424: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3D4420u, 0x3D4428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4428u;
label_3d4428:
    // 0x3d4428: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3D4428u;
    {
        const bool branch_taken_0x3d4428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d4428) {
            ctx->pc = 0x3D4438u;
            goto label_3d4438;
        }
    }
    ctx->pc = 0x3D4430u;
label_3d4430:
    // 0x3d4430: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3D4430u;
    SET_GPR_U32(ctx, 31, 0x3D4438u);
    ctx->pc = 0x3D4434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4430u;
    // 0x3d4434: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3D4430u, 0x3D4438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4438u;
label_3d4438:
    // 0x3d4438: 0x92030521  lbu         $v1, 0x521($s0)
    ctx->pc = 0x3d4438u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x3d443c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d443cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3d4440: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x3D4440u;
    {
        const bool branch_taken_0x3d4440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4440u;
        // 0x3d4444: 0xa2030521  sb          $v1, 0x521($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4440) {
            ctx->pc = 0x3D45E0u;
            goto label_3d45e0;
        }
    }
    ctx->pc = 0x3D4448u;
label_3d4448:
    // 0x3d4448: 0x86020526  lh          $v0, 0x526($s0)
    ctx->pc = 0x3d4448u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1318)));
    // 0x3d444c: 0xa6020512  sh          $v0, 0x512($s0)
    ctx->pc = 0x3d444cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x3d4450: 0xa6000510  sh          $zero, 0x510($s0)
    ctx->pc = 0x3d4450u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d4454: 0xa2000514  sb          $zero, 0x514($s0)
    ctx->pc = 0x3d4454u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d4458: 0xa2000515  sb          $zero, 0x515($s0)
    ctx->pc = 0x3d4458u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d445c: 0x92020521  lbu         $v0, 0x521($s0)
    ctx->pc = 0x3d445cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x3d4460: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3d4460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3d4464: 0xa2020521  sb          $v0, 0x521($s0)
    ctx->pc = 0x3d4464u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 2));
label_3d4468:
    // 0x3d4468: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3d4468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3d446c: 0x34438885  ori         $v1, $v0, 0x8885
    ctx->pc = 0x3d446cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x3d4470: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x3d4470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3d4474: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3d4474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3d4478: 0x26050090  addiu       $a1, $s0, 0x90
    ctx->pc = 0x3d4478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x3d447c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x3d447cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3d4480: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3d4480u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3d4484: 0xc07681c  jal         func_1DA070
    ctx->pc = 0x3D4484u;
    SET_GPR_U32(ctx, 31, 0x3D448Cu);
    ctx->pc = 0x3D4488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4484u;
    // 0x3d4488: 0x260600a0  addiu       $a2, $s0, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA070u, 0x3D4484u, 0x3D448Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D448Cu;
label_3d448c:
    // 0x3d448c: 0x8e060550  lw          $a2, 0x550($s0)
    ctx->pc = 0x3d448cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
    // 0x3d4490: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d4490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d4494: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x3D4494u;
    SET_GPR_U32(ctx, 31, 0x3D449Cu);
    ctx->pc = 0x3D4498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4494u;
    // 0x3d4498: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x3D4494u, 0x3D449Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D449Cu;
label_3d449c:
    // 0x3d449c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D449Cu;
    {
        const bool branch_taken_0x3d449c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D44A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D449Cu;
        // 0x3d44a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d449c) {
            ctx->pc = 0x3D44B0u;
            goto label_3d44b0;
        }
    }
    ctx->pc = 0x3D44A4u;
    // 0x3d44a4: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3D44A4u;
    SET_GPR_U32(ctx, 31, 0x3D44ACu);
    ctx->pc = 0x3D44A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D44A4u;
    // 0x3d44a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3D44A4u, 0x3D44ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D44ACu;
label_3d44ac:
    // 0x3d44ac: 0x0  nop
    ctx->pc = 0x3d44acu;
    // NOP
label_3d44b0:
    // 0x3d44b0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3d44b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3d44b4: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x3d44b4u;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x3d44b8: 0x27aa0060  addiu       $t2, $sp, 0x60
    ctx->pc = 0x3d44b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3d44bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d44bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d44c0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3d44c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3d44c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3d44c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d44c8: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3d44c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3d44cc: 0x7fa90030  sq          $t1, 0x30($sp)
    ctx->pc = 0x3d44ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 9));
    // 0x3d44d0: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x3d44d0u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C30u));
    // 0x3d44d4: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3d44d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3d44d8: 0x7fa60040  sq          $a2, 0x40($sp)
    ctx->pc = 0x3d44d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 6));
    // 0x3d44dc: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x3d44dcu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x3d44e0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3d44e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3d44e4: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x3d44e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x3d44e8: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x3d44e8u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x3d44ec: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3d44ecu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x3d44f0: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x3d44f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3d44f4: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3d44f4u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x3d44f8: 0x92060558  lbu         $a2, 0x558($s0)
    ctx->pc = 0x3d44f8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1368)));
    // 0x3d44fc: 0xc60c0554  lwc1        $f12, 0x554($s0)
    ctx->pc = 0x3d44fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3d4500: 0xc0c0900  jal         func_302400
    ctx->pc = 0x3D4500u;
    SET_GPR_U32(ctx, 31, 0x3D4508u);
    ctx->pc = 0x3D4504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4500u;
    // 0x3d4504: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x3D4500u, 0x3D4508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4508u;
label_3d4508:
    // 0x3d4508: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3D4508u;
    {
        const bool branch_taken_0x3d4508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d4508) {
            ctx->pc = 0x3D4538u;
            goto label_3d4538;
        }
    }
    ctx->pc = 0x3D4510u;
    // 0x3d4510: 0x9204053b  lbu         $a0, 0x53B($s0)
    ctx->pc = 0x3d4510u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
    // 0x3d4514: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x3d4514u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x3d4518: 0xc0aab3c  jal         func_2AACF0
    ctx->pc = 0x3D4518u;
    SET_GPR_U32(ctx, 31, 0x3D4520u);
    ctx->pc = 0x3D451Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4518u;
    // 0x3d451c: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AACF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AACF0u, 0x3D4518u, 0x3D4520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4520u;
label_3d4520:
    // 0x3d4520: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d4520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d4524: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3D4524u;
    SET_GPR_U32(ctx, 31, 0x3D452Cu);
    ctx->pc = 0x3D4528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4524u;
    // 0x3d4528: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3D4524u, 0x3D452Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D452Cu;
label_3d452c:
    // 0x3d452c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x3D452Cu;
    {
        const bool branch_taken_0x3d452c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d452c) {
            ctx->pc = 0x3D45E0u;
            goto label_3d45e0;
        }
    }
    ctx->pc = 0x3D4534u;
    // 0x3d4534: 0x0  nop
    ctx->pc = 0x3d4534u;
    // NOP
label_3d4538:
    // 0x3d4538: 0x92030515  lbu         $v1, 0x515($s0)
    ctx->pc = 0x3d4538u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1301)));
    // 0x3d453c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D453Cu;
    {
        const bool branch_taken_0x3d453c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D453Cu;
        // 0x3d4540: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d453c) {
            ctx->pc = 0x3D4550u;
            goto label_3d4550;
        }
    }
    ctx->pc = 0x3D4544u;
    // 0x3d4544: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3D4544u;
    {
        const bool branch_taken_0x3d4544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d4544) {
            ctx->pc = 0x3D45D0u;
            goto label_3d45d0;
        }
    }
    ctx->pc = 0x3D454Cu;
    // 0x3d454c: 0x0  nop
    ctx->pc = 0x3d454cu;
    // NOP
label_3d4550:
    // 0x3d4550: 0x86040510  lh          $a0, 0x510($s0)
    ctx->pc = 0x3d4550u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3d4554: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3d4554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3d4558: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3d4558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3d455c: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x3d455cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3d4560: 0x86040512  lh          $a0, 0x512($s0)
    ctx->pc = 0x3d4560u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1298)));
    // 0x3d4564: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3D4564u;
    {
        const bool branch_taken_0x3d4564 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3d4564) {
            ctx->pc = 0x3D45A0u;
            goto label_3d45a0;
        }
    }
    ctx->pc = 0x3D456Cu;
    // 0x3d456c: 0x86050510  lh          $a1, 0x510($s0)
    ctx->pc = 0x3d456cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3d4570: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x3d4570u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x3d4574: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3D4574u;
    {
        const bool branch_taken_0x3d4574 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D4578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4574u;
        // 0x3d4578: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4574) {
            ctx->pc = 0x3D45C8u;
            goto label_3d45c8;
        }
    }
    ctx->pc = 0x3D457Cu;
    // 0x3d457c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d457cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d4580: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3d4580u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3d4584: 0x0  nop
    ctx->pc = 0x3d4584u;
    // NOP
    // 0x3d4588: 0x0  nop
    ctx->pc = 0x3d4588u;
    // NOP
    // 0x3d458c: 0x2010  mfhi        $a0
    ctx->pc = 0x3d458cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3d4590: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x3d4590u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3d4594: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3D4594u;
    {
        const bool branch_taken_0x3d4594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4594u;
        // 0x3d4598: 0xa2030514  sb          $v1, 0x514($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4594) {
            ctx->pc = 0x3D45C8u;
            goto label_3d45c8;
        }
    }
    ctx->pc = 0x3D459Cu;
    // 0x3d459c: 0x0  nop
    ctx->pc = 0x3d459cu;
    // NOP
label_3d45a0:
    // 0x3d45a0: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x3d45a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3d45a4: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3d45a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3d45a8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3D45A8u;
    {
        const bool branch_taken_0x3d45a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d45a8) {
            ctx->pc = 0x3D45C8u;
            goto label_3d45c8;
        }
    }
    ctx->pc = 0x3D45B0u;
    // 0x3d45b0: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x3d45b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3d45b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d45b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d45b8: 0xa2030515  sb          $v1, 0x515($s0)
    ctx->pc = 0x3d45b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d45bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3D45BCu;
    {
        const bool branch_taken_0x3d45bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D45C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D45BCu;
        // 0x3d45c0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d45bc) {
            ctx->pc = 0x3D45D0u;
            goto label_3d45d0;
        }
    }
    ctx->pc = 0x3D45C4u;
    // 0x3d45c4: 0x0  nop
    ctx->pc = 0x3d45c4u;
    // NOP
label_3d45c8:
    // 0x3d45c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d45c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d45cc: 0x0  nop
    ctx->pc = 0x3d45ccu;
    // NOP
label_3d45d0:
    // 0x3d45d0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D45D0u;
    {
        const bool branch_taken_0x3d45d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D45D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D45D0u;
        // 0x3d45d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d45d0) {
            ctx->pc = 0x3D45E0u;
            goto label_3d45e0;
        }
    }
    ctx->pc = 0x3D45D8u;
    // 0x3d45d8: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3D45D8u;
    SET_GPR_U32(ctx, 31, 0x3D45E0u);
    ctx->pc = 0x3D45DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D45D8u;
    // 0x3d45dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3D45D8u, 0x3D45E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D45E0u;
label_3d45e0:
    // 0x3d45e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3d45e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d45e4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3d45e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d45e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3D45E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D45ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D45E8u;
        // 0x3d45ec: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D45E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D45F0u;
}
