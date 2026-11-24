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

// Function: sub_001D0890
// Address: 0x1d0890 - 0x1d099c
void sub_001D0890_0x1d0890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0890_0x1d0890");
#endif

    switch (ctx->pc) {
        case 0x1d0988u: goto label_1d0988;
        default: break;
    }

    ctx->pc = 0x1d0890u;

    // 0x1d0890: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d0890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d0894: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d0894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d0898: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d0898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d089c: 0x8f8287e0  lw          $v0, -0x7820($gp)
    ctx->pc = 0x1d089cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936544)));
    // 0x1d08a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d08a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d08a4: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x1d08a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x1d08a8: 0xdf8287e0  ld          $v0, -0x7820($gp)
    ctx->pc = 0x1d08a8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936544)));
    // 0x1d08ac: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x1d08acu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x1d08b0: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D08B0u;
    {
        const bool branch_taken_0x1d08b0 = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x1D08B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D08B0u;
        // 0x1d08b4: 0xff8287e0  sd          $v0, -0x7820($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294936544), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d08b0) {
            ctx->pc = 0x1D08C0u;
            goto label_1d08c0;
        }
    }
    ctx->pc = 0x1D08B8u;
    // 0x1d08b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D08B8u;
    {
        const bool branch_taken_0x1d08b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D08BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D08B8u;
        // 0x1d08bc: 0xa6000030  sh          $zero, 0x30($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d08b8) {
            ctx->pc = 0x1D08C8u;
            goto label_1d08c8;
        }
    }
    ctx->pc = 0x1D08C0u;
label_1d08c0:
    // 0x1d08c0: 0xa6050030  sh          $a1, 0x30($s0)
    ctx->pc = 0x1d08c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 5));
    // 0x1d08c4: 0x0  nop
    ctx->pc = 0x1d08c4u;
    // NOP
label_1d08c8:
    // 0x1d08c8: 0xa6060032  sh          $a2, 0x32($s0)
    ctx->pc = 0x1d08c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 50), (uint16_t)GPR_U32(ctx, 6));
    // 0x1d08cc: 0x96020032  lhu         $v0, 0x32($s0)
    ctx->pc = 0x1d08ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 50)));
    // 0x1d08d0: 0x3c050087  lui         $a1, 0x87
    ctx->pc = 0x1d08d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)135 << 16));
    // 0x1d08d4: 0x96030030  lhu         $v1, 0x30($s0)
    ctx->pc = 0x1d08d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1d08d8: 0x24a5c690  addiu       $a1, $a1, -0x3970
    ctx->pc = 0x1d08d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952592));
    // 0x1d08dc: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1d08dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d08e0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1d08e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1d08e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d08e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d08e8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1d08e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d08ec: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x1d08ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1d08f0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1d08f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1d08f4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d08f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d08f8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1D08F8u;
    {
        const bool branch_taken_0x1d08f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d08f8) {
            ctx->pc = 0x1D0930u;
            goto label_1d0930;
        }
    }
    ctx->pc = 0x1D0900u;
    // 0x1d0900: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x1d0900u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x1d0904: 0x96040030  lhu         $a0, 0x30($s0)
    ctx->pc = 0x1d0904u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1d0908: 0x96020032  lhu         $v0, 0x32($s0)
    ctx->pc = 0x1d0908u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 50)));
    // 0x1d090c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1d090cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1d0910: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d0910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d0914: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d0914u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d0918: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d0918u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d091c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1d091cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1d0920: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d0920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d0924: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d0924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d0928: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1D0928u;
    {
        const bool branch_taken_0x1d0928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D092Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0928u;
        // 0x1d092c: 0xac500010  sw          $s0, 0x10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0928) {
            ctx->pc = 0x1D0948u;
            goto label_1d0948;
        }
    }
    ctx->pc = 0x1D0930u;
label_1d0930:
    // 0x1d0930: 0x3c020087  lui         $v0, 0x87
    ctx->pc = 0x1d0930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)135 << 16));
    // 0x1d0934: 0x2442c640  addiu       $v0, $v0, -0x39C0
    ctx->pc = 0x1d0934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952512));
    // 0x1d0938: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d0938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d093c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1d093cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1d0940: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1d0940u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1d0944: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1d0944u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_1d0948:
    // 0x1d0948: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1d0948u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1d094c: 0x96070030  lhu         $a3, 0x30($s0)
    ctx->pc = 0x1d094cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1d0950: 0x3c030087  lui         $v1, 0x87
    ctx->pc = 0x1d0950u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)135 << 16));
    // 0x1d0954: 0x96020032  lhu         $v0, 0x32($s0)
    ctx->pc = 0x1d0954u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 50)));
    // 0x1d0958: 0x3c040087  lui         $a0, 0x87
    ctx->pc = 0x1d0958u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)135 << 16));
    // 0x1d095c: 0x2463c690  addiu       $v1, $v1, -0x3970
    ctx->pc = 0x1d095cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952592));
    // 0x1d0960: 0x2484c6e0  addiu       $a0, $a0, -0x3920
    ctx->pc = 0x1d0960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952672));
    // 0x1d0964: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d0964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0968: 0x73040  sll         $a2, $a3, 1
    ctx->pc = 0x1d0968u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x1d096c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1d096cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1d0970: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d0970u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d0974: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1d0974u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1d0978: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1d0978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1d097c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d097cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d0980: 0xc07ccb8  jal         func_1F32E0
    ctx->pc = 0x1D0980u;
    SET_GPR_U32(ctx, 31, 0x1D0988u);
    ctx->pc = 0x1D0984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0980u;
    // 0x1d0984: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F32E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F32E0u, 0x1D0980u, 0x1D0988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0988u;
label_1d0988:
    // 0x1d0988: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1d0988u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1d098c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d098cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0990: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d0990u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0994: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0994u;
        // 0x1d0998: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D099Cu;
}
