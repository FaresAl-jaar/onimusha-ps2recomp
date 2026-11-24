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

// Function: sub_0029B680
// Address: 0x29b680 - 0x29b788
void sub_0029B680_0x29b680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B680_0x29b680");
#endif

    switch (ctx->pc) {
        case 0x29b6d4u: goto label_29b6d4;
        case 0x29b720u: goto label_29b720;
        case 0x29b728u: goto label_29b728;
        case 0x29b750u: goto label_29b750;
        case 0x29b774u: goto label_29b774;
        default: break;
    }

    ctx->pc = 0x29b680u;

    // 0x29b680: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29b680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29b684: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29b684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29b688: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29b688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29b68c: 0x8c83004c  lw          $v1, 0x4C($a0)
    ctx->pc = 0x29b68cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x29b690: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x29B690u;
    {
        const bool branch_taken_0x29b690 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B690u;
        // 0x29b694: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b690) {
            ctx->pc = 0x29B778u;
            goto label_29b778;
        }
    }
    ctx->pc = 0x29B698u;
    // 0x29b698: 0x8e030148  lw          $v1, 0x148($s0)
    ctx->pc = 0x29b698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x29b69c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x29b69cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x29b6a0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x29b6a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x29b6a4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x29b6a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x29b6a8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29b6a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29b6ac: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x29B6ACu;
    {
        const bool branch_taken_0x29b6ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B6ACu;
        // 0x29b6b0: 0x3c020008  lui         $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b6ac) {
            ctx->pc = 0x29B6E8u;
            goto label_29b6e8;
        }
    }
    ctx->pc = 0x29B6B4u;
    // 0x29b6b4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x29b6b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x29b6b8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x29b6b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x29b6bc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x29b6bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x29b6c0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29b6c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29b6c4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x29B6C4u;
    {
        const bool branch_taken_0x29b6c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B6C4u;
        // 0x29b6c8: 0x260404c4  addiu       $a0, $s0, 0x4C4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1220));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b6c4) {
            ctx->pc = 0x29B6E8u;
            goto label_29b6e8;
        }
    }
    ctx->pc = 0x29B6CCu;
    // 0x29b6cc: 0xc0a7008  jal         func_29C020
    ctx->pc = 0x29B6CCu;
    SET_GPR_U32(ctx, 31, 0x29B6D4u);
    ctx->pc = 0x29B6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B6CCu;
    // 0x29b6d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C020u, 0x29B6CCu, 0x29B6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B6D4u;
label_29b6d4:
    // 0x29b6d4: 0x8e0204cc  lw          $v0, 0x4CC($s0)
    ctx->pc = 0x29b6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1228)));
    // 0x29b6d8: 0xae0204c8  sw          $v0, 0x4C8($s0)
    ctx->pc = 0x29b6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1224), GPR_U32(ctx, 2));
    // 0x29b6dc: 0x8e0204c4  lw          $v0, 0x4C4($s0)
    ctx->pc = 0x29b6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1220)));
    // 0x29b6e0: 0xae0204cc  sw          $v0, 0x4CC($s0)
    ctx->pc = 0x29b6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1228), GPR_U32(ctx, 2));
    // 0x29b6e4: 0x0  nop
    ctx->pc = 0x29b6e4u;
    // NOP
label_29b6e8:
    // 0x29b6e8: 0x8e040078  lw          $a0, 0x78($s0)
    ctx->pc = 0x29b6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x29b6ec: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x29B6ECu;
    {
        const bool branch_taken_0x29b6ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b6ec) {
            ctx->pc = 0x29B728u;
            goto label_29b728;
        }
    }
    ctx->pc = 0x29B6F4u;
    // 0x29b6f4: 0x96020030  lhu         $v0, 0x30($s0)
    ctx->pc = 0x29b6f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x29b6f8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x29b6f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x29b6fc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x29B6FCu;
    {
        const bool branch_taken_0x29b6fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b6fc) {
            ctx->pc = 0x29B720u;
            goto label_29b720;
        }
    }
    ctx->pc = 0x29B704u;
    // 0x29b704: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x29b704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x29b708: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x29b708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29b70c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x29b70cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x29b710: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29B710u;
    {
        const bool branch_taken_0x29b710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29b710) {
            ctx->pc = 0x29B720u;
            goto label_29b720;
        }
    }
    ctx->pc = 0x29B718u;
    // 0x29b718: 0xc05f2c0  jal         func_17CB00
    ctx->pc = 0x29B718u;
    SET_GPR_U32(ctx, 31, 0x29B720u);
    ctx->pc = 0x17CB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CB00u, 0x29B718u, 0x29B720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B720u;
label_29b720:
    // 0x29b720: 0xc05f2e0  jal         func_17CB80
    ctx->pc = 0x29B720u;
    SET_GPR_U32(ctx, 31, 0x29B728u);
    ctx->pc = 0x29B724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B720u;
    // 0x29b724: 0x8e040078  lw          $a0, 0x78($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CB80u, 0x29B720u, 0x29B728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B728u;
label_29b728:
    // 0x29b728: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x29b728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x29b72c: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x29b72cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x29b730: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x29b730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x29b734: 0x260600c0  addiu       $a2, $s0, 0xC0
    ctx->pc = 0x29b734u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x29b738: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x29b738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x29b73c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x29b73cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x29b740: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x29b740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x29b744: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29b744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29b748: 0xc0a8318  jal         func_2A0C60
    ctx->pc = 0x29B748u;
    SET_GPR_U32(ctx, 31, 0x29B750u);
    ctx->pc = 0x29B74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B748u;
    // 0x29b74c: 0x2382b  sltu        $a3, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0C60u, 0x29B748u, 0x29B750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B750u;
label_29b750:
    // 0x29b750: 0x96030030  lhu         $v1, 0x30($s0)
    ctx->pc = 0x29b750u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x29b754: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x29b754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x29b758: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x29B758u;
    {
        const bool branch_taken_0x29b758 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b758) {
            ctx->pc = 0x29B778u;
            goto label_29b778;
        }
    }
    ctx->pc = 0x29B760u;
    // 0x29b760: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x29b760u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x29b764: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x29b764u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x29b768: 0x92060001  lbu         $a2, 0x1($s0)
    ctx->pc = 0x29b768u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x29b76c: 0xc0c0f8c  jal         func_303E30
    ctx->pc = 0x29B76Cu;
    SET_GPR_U32(ctx, 31, 0x29B774u);
    ctx->pc = 0x29B770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B76Cu;
    // 0x29b770: 0x2484e080  addiu       $a0, $a0, -0x1F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x303E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x303E30u, 0x29B76Cu, 0x29B774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B774u;
label_29b774:
    // 0x29b774: 0x0  nop
    ctx->pc = 0x29b774u;
    // NOP
label_29b778:
    // 0x29b778: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29b778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b77c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29b77cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b780: 0x3e00008  jr          $ra
    ctx->pc = 0x29B780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B780u;
        // 0x29b784: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29B788u;
}
