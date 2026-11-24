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

// Function: sub_00336200
// Address: 0x336200 - 0x3362f0
void sub_00336200_0x336200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00336200_0x336200");
#endif

    switch (ctx->pc) {
        case 0x336288u: goto label_336288;
        case 0x3362acu: goto label_3362ac;
        case 0x3362b8u: goto label_3362b8;
        case 0x3362dcu: goto label_3362dc;
        default: break;
    }

    ctx->pc = 0x336200u;

    // 0x336200: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x336200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x336204: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x336204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x336208: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x336208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x33620c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33620cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x336210: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x336210u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x336214: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x336214u;
    {
        const bool branch_taken_0x336214 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x336218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336214u;
        // 0x336218: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336214) {
            ctx->pc = 0x336248u;
            goto label_336248;
        }
    }
    ctx->pc = 0x33621Cu;
    // 0x33621c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x33621cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x336220: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x336220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x336224: 0x8c23cec0  lw          $v1, -0x3140($at)
    ctx->pc = 0x336224u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x336228: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x336228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x33622c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x33622Cu;
    {
        const bool branch_taken_0x33622c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33622c) {
            ctx->pc = 0x336280u;
            goto label_336280;
        }
    }
    ctx->pc = 0x336234u;
    // 0x336234: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x336234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x336238: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x336238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x33623c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x33623Cu;
    {
        const bool branch_taken_0x33623c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33623Cu;
        // 0x336240: 0xae020148  sw          $v0, 0x148($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33623c) {
            ctx->pc = 0x336280u;
            goto label_336280;
        }
    }
    ctx->pc = 0x336244u;
    // 0x336244: 0x0  nop
    ctx->pc = 0x336244u;
    // NOP
label_336248:
    // 0x336248: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x336248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x33624c: 0x8c23cec0  lw          $v1, -0x3140($at)
    ctx->pc = 0x33624cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x336250: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x336250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x336254: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x336254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x336258: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x336258u;
    {
        const bool branch_taken_0x336258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x336258) {
            ctx->pc = 0x336280u;
            goto label_336280;
        }
    }
    ctx->pc = 0x336260u;
    // 0x336260: 0x8e030148  lw          $v1, 0x148($s0)
    ctx->pc = 0x336260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x336264: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x336264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x336268: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x336268u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x33626c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x33626cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x336270: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x336270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x336274: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x336274u;
    {
        const bool branch_taken_0x336274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x336278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336274u;
        // 0x336278: 0x34620001  ori         $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x336274) {
            ctx->pc = 0x336280u;
            goto label_336280;
        }
    }
    ctx->pc = 0x33627Cu;
    // 0x33627c: 0xae020148  sw          $v0, 0x148($s0)
    ctx->pc = 0x33627cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
label_336280:
    // 0x336280: 0xc0a6d70  jal         func_29B5C0
    ctx->pc = 0x336280u;
    SET_GPR_U32(ctx, 31, 0x336288u);
    ctx->pc = 0x336284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336280u;
    // 0x336284: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B5C0u, 0x336280u, 0x336288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336288u;
label_336288:
    // 0x336288: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x336288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x33628c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x33628cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x336290: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x336290u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x336294: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x336294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x336298: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x336298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33629c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33629Cu;
    {
        const bool branch_taken_0x33629c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3362A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33629Cu;
        // 0x3362a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33629c) {
            ctx->pc = 0x3362B0u;
            goto label_3362b0;
        }
    }
    ctx->pc = 0x3362A4u;
    // 0x3362a4: 0xc0cd798  jal         func_335E60
    ctx->pc = 0x3362A4u;
    SET_GPR_U32(ctx, 31, 0x3362ACu);
    ctx->pc = 0x335E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E60u, 0x3362A4u, 0x3362ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3362ACu;
label_3362ac:
    // 0x3362ac: 0x0  nop
    ctx->pc = 0x3362acu;
    // NOP
label_3362b0:
    // 0x3362b0: 0xc0a6da0  jal         func_29B680
    ctx->pc = 0x3362B0u;
    SET_GPR_U32(ctx, 31, 0x3362B8u);
    ctx->pc = 0x3362B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3362B0u;
    // 0x3362b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B680u, 0x3362B0u, 0x3362B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3362B8u;
label_3362b8:
    // 0x3362b8: 0x8e030148  lw          $v1, 0x148($s0)
    ctx->pc = 0x3362b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x3362bc: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x3362bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x3362c0: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x3362c0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3362c4: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x3362c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x3362c8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3362c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3362cc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3362CCu;
    {
        const bool branch_taken_0x3362cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3362D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3362CCu;
        // 0x3362d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3362cc) {
            ctx->pc = 0x3362E0u;
            goto label_3362e0;
        }
    }
    ctx->pc = 0x3362D4u;
    // 0x3362d4: 0xc0a6e60  jal         func_29B980
    ctx->pc = 0x3362D4u;
    SET_GPR_U32(ctx, 31, 0x3362DCu);
    ctx->pc = 0x29B980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B980u, 0x3362D4u, 0x3362DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3362DCu;
label_3362dc:
    // 0x3362dc: 0x0  nop
    ctx->pc = 0x3362dcu;
    // NOP
label_3362e0:
    // 0x3362e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3362e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3362e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3362e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3362e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3362E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3362ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3362E8u;
        // 0x3362ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3362E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3362F0u;
}
