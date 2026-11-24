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

// Function: sub_0023C858
// Address: 0x23c858 - 0x23c90c
void sub_0023C858_0x23c858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023C858_0x23c858");
#endif

    switch (ctx->pc) {
        case 0x23c8b8u: goto label_23c8b8;
        case 0x23c8c4u: goto label_23c8c4;
        default: break;
    }

    ctx->pc = 0x23c858u;

    // 0x23c858: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23c858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23c85c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23c85cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23c860: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23c860u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c864: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23c864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23c868: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x23c868u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c86c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23c86cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x23c870: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x23c870u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c874: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x23c874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x23c878: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x23c878u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c87c: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23C87Cu;
    {
        const bool branch_taken_0x23c87c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C87Cu;
        // 0x23c880: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c87c) {
            ctx->pc = 0x23C88Cu;
            goto label_23c88c;
        }
    }
    ctx->pc = 0x23C884u;
    // 0x23c884: 0x1620000a  bnez        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x23C884u;
    {
        const bool branch_taken_0x23c884 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c884) {
            ctx->pc = 0x23C8B0u;
            goto label_23c8b0;
        }
    }
    ctx->pc = 0x23C88Cu;
label_23c88c:
    // 0x23c88c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x23c88cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x23c890: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23c890u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c894: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23c894u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23c898: 0x2484b7c0  addiu       $a0, $a0, -0x4840
    ctx->pc = 0x23c898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948800));
    // 0x23c89c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23c89cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c8a0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x23c8a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23c8a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23c8a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23c8a8: 0x808baa4  j           func_22EA90
    ctx->pc = 0x23C8A8u;
    ctx->pc = 0x23C8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C8A8u;
    // 0x23c8ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA90u;
    sub_0022EA90_0x22ea90(rdram, ctx, runtime); return;
    ctx->pc = 0x23C8B0u;
label_23c8b0:
    // 0x23c8b0: 0xc08e6f4  jal         func_239BD0
    ctx->pc = 0x23C8B0u;
    SET_GPR_U32(ctx, 31, 0x23C8B8u);
    ctx->pc = 0x239BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239BD0u, 0x23C8B0u, 0x23C8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C8B8u;
label_23c8b8:
    // 0x23c8b8: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x23c8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x23c8bc: 0xc049ed2  jal         func_127B48
    ctx->pc = 0x23C8BCu;
    SET_GPR_U32(ctx, 31, 0x23C8C4u);
    ctx->pc = 0x23C8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C8BCu;
    // 0x23c8c0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B48u, 0x23C8BCu, 0x23C8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C8C4u;
label_23c8c4:
    // 0x23c8c4: 0x8e0300b0  lw          $v1, 0xB0($s0)
    ctx->pc = 0x23c8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x23c8c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23c8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23c8cc: 0xae1200bc  sw          $s2, 0xBC($s0)
    ctx->pc = 0x23c8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 18));
    // 0x23c8d0: 0xae1300c0  sw          $s3, 0xC0($s0)
    ctx->pc = 0x23c8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 19));
    // 0x23c8d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23c8d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c8d8: 0xae0300b4  sw          $v1, 0xB4($s0)
    ctx->pc = 0x23c8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 3));
    // 0x23c8dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23c8dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c8e0: 0xa20200ac  sb          $v0, 0xAC($s0)
    ctx->pc = 0x23c8e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 172), (uint8_t)GPR_U32(ctx, 2));
    // 0x23c8e4: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x23c8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    // 0x23c8e8: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x23c8e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x23c8ec: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x23c8ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x23c8f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23c8f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23c8f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23c8f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c8f8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23c8f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c8fc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x23c8fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23c900: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23c900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23c904: 0x808efaa  j           func_23BEA8
    ctx->pc = 0x23C904u;
    ctx->pc = 0x23C908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C904u;
    // 0x23c908: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23BEA8u;
    sub_0023BEA8_0x23bea8(rdram, ctx, runtime); return;
    ctx->pc = 0x23C90Cu;
}
