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

// Function: sub_003A0420
// Address: 0x3a0420 - 0x3a0520
void sub_003A0420_0x3a0420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A0420_0x3a0420");
#endif

    switch (ctx->pc) {
        case 0x3a0440u: goto label_3a0440;
        case 0x3a0510u: goto label_3a0510;
        default: break;
    }

    ctx->pc = 0x3a0420u;

    // 0x3a0420: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a0420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a0424: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x3a0424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x3a0428: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3a0428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3a042c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3a042cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3a0430: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a0430u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0434: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3a0434u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3a0438: 0xc05e360  jal         func_178D80
    ctx->pc = 0x3A0438u;
    SET_GPR_U32(ctx, 31, 0x3A0440u);
    ctx->pc = 0x3A043Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0438u;
    // 0x3a043c: 0x2484cea0  addiu       $a0, $a0, -0x3160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x3A0438u, 0x3A0440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0440u;
label_3a0440:
    // 0x3a0440: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3a0440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0444: 0x10a00032  beqz        $a1, . + 4 + (0x32 << 2)
    ctx->pc = 0x3A0444u;
    {
        const bool branch_taken_0x3a0444 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0444u;
        // 0x3a0448: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0444) {
            ctx->pc = 0x3A0510u;
            goto label_3a0510;
        }
    }
    ctx->pc = 0x3A044Cu;
    // 0x3a044c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3a044cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a0450: 0x9023fc8c  lbu         $v1, -0x374($at)
    ctx->pc = 0x3a0450u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966412)));
    // 0x3a0454: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A0454u;
    {
        const bool branch_taken_0x3a0454 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A0458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0454u;
        // 0x3a0458: 0x240400e0  addiu       $a0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0454) {
            ctx->pc = 0x3A0478u;
            goto label_3a0478;
        }
    }
    ctx->pc = 0x3A045Cu;
    // 0x3a045c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a045cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a0460: 0x8c22ceb8  lw          $v0, -0x3148($at)
    ctx->pc = 0x3a0460u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x3a0464: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3a0464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x3a0468: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A0468u;
    {
        const bool branch_taken_0x3a0468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a0468) {
            ctx->pc = 0x3A0478u;
            goto label_3a0478;
        }
    }
    ctx->pc = 0x3A0470u;
    // 0x3a0470: 0x24040120  addiu       $a0, $zero, 0x120
    ctx->pc = 0x3a0470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    // 0x3a0474: 0x0  nop
    ctx->pc = 0x3a0474u;
    // NOP
label_3a0478:
    // 0x3a0478: 0x24820f20  addiu       $v0, $a0, 0xF20
    ctx->pc = 0x3a0478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3872));
    // 0x3a047c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3a047cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3a0480: 0x214c0  sll         $v0, $v0, 19
    ctx->pc = 0x3a0480u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 19));
    // 0x3a0484: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x3a0484u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x3a0488: 0x344b7000  ori         $t3, $v0, 0x7000
    ctx->pc = 0x3a0488u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x3a048c: 0x3c032028  lui         $v1, 0x2028
    ctx->pc = 0x3a048cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8232 << 16));
    // 0x3a0490: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x3a0490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x3a0494: 0x34630156  ori         $v1, $v1, 0x156
    ctx->pc = 0x3a0494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)342);
    // 0x3a0498: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x3a0498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x3a049c: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x3a049cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x3a04a0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3a04a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3a04a4: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x3a04a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x3a04a8: 0x340afffc  ori         $t2, $zero, 0xFFFC
    ctx->pc = 0x3a04a8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
    // 0x3a04ac: 0x8e0c0014  lw          $t4, 0x14($s0)
    ctx->pc = 0x3a04acu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x3a04b0: 0x3c020e00  lui         $v0, 0xE00
    ctx->pc = 0x3a04b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3584 << 16));
    // 0x3a04b4: 0x34490d00  ori         $t1, $v0, 0xD00
    ctx->pc = 0x3a04b4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3328);
    // 0x3a04b8: 0x3c080200  lui         $t0, 0x200
    ctx->pc = 0x3a04b8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)512 << 16));
    // 0x3a04bc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3a04bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3a04c0: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x3a04c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x3a04c4: 0x34470d00  ori         $a3, $v0, 0xD00
    ctx->pc = 0x3a04c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3328);
    // 0x3a04c8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3a04c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3a04cc: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x3a04ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x3a04d0: 0x34432000  ori         $v1, $v0, 0x2000
    ctx->pc = 0x3a04d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x3a04d4: 0xacac0010  sw          $t4, 0x10($a1)
    ctx->pc = 0x3a04d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 12));
    // 0x3a04d8: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x3a04d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3a04dc: 0x820c0001  lb          $t4, 0x1($s0)
    ctx->pc = 0x3a04dcu;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x3a04e0: 0xa4ac0014  sh          $t4, 0x14($a1)
    ctx->pc = 0x3a04e0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 20), (uint16_t)GPR_U32(ctx, 12));
    // 0x3a04e4: 0xa4a00016  sh          $zero, 0x16($a1)
    ctx->pc = 0x3a04e4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 22), (uint16_t)GPR_U32(ctx, 0));
    // 0x3a04e8: 0xacab0020  sw          $t3, 0x20($a1)
    ctx->pc = 0x3a04e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 11));
    // 0x3a04ec: 0xacaa0024  sw          $t2, 0x24($a1)
    ctx->pc = 0x3a04ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 10));
    // 0x3a04f0: 0xaca90028  sw          $t1, 0x28($a1)
    ctx->pc = 0x3a04f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 9));
    // 0x3a04f4: 0xaca80018  sw          $t0, 0x18($a1)
    ctx->pc = 0x3a04f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 8));
    // 0x3a04f8: 0xaca7001c  sw          $a3, 0x1C($a1)
    ctx->pc = 0x3a04f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 7));
    // 0x3a04fc: 0x8ca70004  lw          $a3, 0x4($a1)
    ctx->pc = 0x3a04fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3a0500: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x3a0500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x3a0504: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x3a0504u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x3a0508: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x3A0508u;
    SET_GPR_U32(ctx, 31, 0x3A0510u);
    ctx->pc = 0x3A050Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0508u;
    // 0x3a050c: 0xa0a2000f  sb          $v0, 0xF($a1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 5), 15), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x3A0508u, 0x3A0510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0510u;
label_3a0510:
    // 0x3a0510: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a0510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a0514: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3a0514u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a0518: 0x3e00008  jr          $ra
    ctx->pc = 0x3A0518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A051Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0518u;
        // 0x3a051c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A0518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A0520u;
}
