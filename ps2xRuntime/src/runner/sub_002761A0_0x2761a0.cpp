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

// Function: sub_002761A0
// Address: 0x2761a0 - 0x276250
void sub_002761A0_0x2761a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002761A0_0x2761a0");
#endif

    switch (ctx->pc) {
        case 0x27623cu: goto label_27623c;
        default: break;
    }

    ctx->pc = 0x2761a0u;

    // 0x2761a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2761a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2761a4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2761a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2761a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2761a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2761ac: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x2761acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2761b0: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2761B0u;
    {
        const bool branch_taken_0x2761b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2761B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2761B0u;
        // 0x2761b4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2761b0) {
            ctx->pc = 0x276218u;
            goto label_276218;
        }
    }
    ctx->pc = 0x2761B8u;
    // 0x2761b8: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2761B8u;
    {
        const bool branch_taken_0x2761b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2761b8) {
            ctx->pc = 0x276208u;
            goto label_276208;
        }
    }
    ctx->pc = 0x2761C0u;
    // 0x2761c0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2761c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2761c4: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2761C4u;
    {
        const bool branch_taken_0x2761c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2761C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2761C4u;
        // 0x2761c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2761c4) {
            ctx->pc = 0x2761F0u;
            goto label_2761f0;
        }
    }
    ctx->pc = 0x2761CCu;
    // 0x2761cc: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2761CCu;
    {
        const bool branch_taken_0x2761cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2761cc) {
            ctx->pc = 0x2761E0u;
            goto label_2761e0;
        }
    }
    ctx->pc = 0x2761D4u;
    // 0x2761d4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2761D4u;
    {
        const bool branch_taken_0x2761d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2761d4) {
            ctx->pc = 0x276240u;
            goto label_276240;
        }
    }
    ctx->pc = 0x2761DCu;
    // 0x2761dc: 0x0  nop
    ctx->pc = 0x2761dcu;
    // NOP
label_2761e0:
    // 0x2761e0: 0x8c8206cc  lw          $v0, 0x6CC($a0)
    ctx->pc = 0x2761e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1740)));
    // 0x2761e4: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x2761e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x2761e8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2761E8u;
    {
        const bool branch_taken_0x2761e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2761ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2761E8u;
        // 0x2761ec: 0xac8206cc  sw          $v0, 0x6CC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1740), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2761e8) {
            ctx->pc = 0x276240u;
            goto label_276240;
        }
    }
    ctx->pc = 0x2761F0u;
label_2761f0:
    // 0x2761f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2761f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2761f4: 0xa0822b26  sb          $v0, 0x2B26($a0)
    ctx->pc = 0x2761f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11046), (uint8_t)GPR_U32(ctx, 2));
    // 0x2761f8: 0xa0822b24  sb          $v0, 0x2B24($a0)
    ctx->pc = 0x2761f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11044), (uint8_t)GPR_U32(ctx, 2));
    // 0x2761fc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2761FCu;
    {
        const bool branch_taken_0x2761fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2761FCu;
        // 0x276200: 0xa08229d1  sb          $v0, 0x29D1($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 10705), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2761fc) {
            ctx->pc = 0x276240u;
            goto label_276240;
        }
    }
    ctx->pc = 0x276204u;
    // 0x276204: 0x0  nop
    ctx->pc = 0x276204u;
    // NOP
label_276208:
    // 0x276208: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x276208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27620c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x27620Cu;
    {
        const bool branch_taken_0x27620c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27620Cu;
        // 0x276210: 0xa0822b60  sb          $v0, 0x2B60($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 11104), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27620c) {
            ctx->pc = 0x276240u;
            goto label_276240;
        }
    }
    ctx->pc = 0x276214u;
    // 0x276214: 0x0  nop
    ctx->pc = 0x276214u;
    // NOP
label_276218:
    // 0x276218: 0x8c8306ac  lw          $v1, 0x6AC($a0)
    ctx->pc = 0x276218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1708)));
    // 0x27621c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x27621cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x276220: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x276220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x276224: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x276224u;
    {
        const bool branch_taken_0x276224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x276224) {
            ctx->pc = 0x276240u;
            goto label_276240;
        }
    }
    ctx->pc = 0x27622Cu;
    // 0x27622c: 0xdc820500  ld          $v0, 0x500($a0)
    ctx->pc = 0x27622cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 1280)));
    // 0x276230: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x276230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x276234: 0xc0a24b0  jal         func_2892C0
    ctx->pc = 0x276234u;
    SET_GPR_U32(ctx, 31, 0x27623Cu);
    ctx->pc = 0x276238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276234u;
    // 0x276238: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2892C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2892C0u, 0x276234u, 0x27623Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27623Cu;
label_27623c:
    // 0x27623c: 0x0  nop
    ctx->pc = 0x27623cu;
    // NOP
label_276240:
    // 0x276240: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x276240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x276244: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x276244u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276248: 0x3e00008  jr          $ra
    ctx->pc = 0x276248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27624Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276248u;
        // 0x27624c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x276250u;
}
