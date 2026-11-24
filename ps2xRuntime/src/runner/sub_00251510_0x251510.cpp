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

// Function: sub_00251510
// Address: 0x251510 - 0x2515f4
void sub_00251510_0x251510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00251510_0x251510");
#endif

    switch (ctx->pc) {
        case 0x251548u: goto label_251548;
        case 0x2515e0u: goto label_2515e0;
        default: break;
    }

    ctx->pc = 0x251510u;

    // 0x251510: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x251510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x251514: 0x3c08004e  lui         $t0, 0x4E
    ctx->pc = 0x251514u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)78 << 16));
    // 0x251518: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x251518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25151c: 0x2503edb8  addiu       $v1, $t0, -0x1248
    ctx->pc = 0x25151cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294962616));
    // 0x251520: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x251520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x251524: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x251524u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251528: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x251528u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25152c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x25152cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251530: 0x80620004  lb          $v0, 0x4($v1)
    ctx->pc = 0x251530u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x4DEDBCu));
    // 0x251534: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x251534u;
    {
        const bool branch_taken_0x251534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x251538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251534u;
        // 0x251538: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251534) {
            ctx->pc = 0x25156Cu;
            goto label_25156c;
        }
    }
    ctx->pc = 0x25153Cu;
    // 0x25153c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x25153cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x251540: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x251540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x251544: 0x0  nop
    ctx->pc = 0x251544u;
    // NOP
label_251548:
    // 0x251548: 0x28820040  slti        $v0, $a0, 0x40
    ctx->pc = 0x251548u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x25154c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x25154Cu;
    {
        const bool branch_taken_0x25154c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x251550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25154Cu;
        // 0x251550: 0x24630030  addiu       $v1, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25154c) {
            ctx->pc = 0x25156Cu;
            goto label_25156c;
        }
    }
    ctx->pc = 0x251554u;
    // 0x251554: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x251554u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x251558: 0x0  nop
    ctx->pc = 0x251558u;
    // NOP
    // 0x25155c: 0x0  nop
    ctx->pc = 0x25155cu;
    // NOP
    // 0x251560: 0x0  nop
    ctx->pc = 0x251560u;
    // NOP
    // 0x251564: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x251564u;
    {
        const bool branch_taken_0x251564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x251564) {
            ctx->pc = 0x251568u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251564u;
            // 0x251568: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x251548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_251548;
        }
    }
    ctx->pc = 0x25156Cu;
label_25156c:
    // 0x25156c: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x25156cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x251570: 0x1083001c  beq         $a0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x251570u;
    {
        const bool branch_taken_0x251570 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x251574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251570u;
        // 0x251574: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251570) {
            ctx->pc = 0x2515E4u;
            goto label_2515e4;
        }
    }
    ctx->pc = 0x251578u;
    // 0x251578: 0x48040  sll         $s0, $a0, 1
    ctx->pc = 0x251578u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x25157c: 0x2503edb8  addiu       $v1, $t0, -0x1248
    ctx->pc = 0x25157cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294962616));
    // 0x251580: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x251580u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x251584: 0x24e4000f  addiu       $a0, $a3, 0xF
    ctx->pc = 0x251584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 15));
    // 0x251588: 0x28e20000  slti        $v0, $a3, 0x0
    ctx->pc = 0x251588u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x25158c: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x25158cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x251590: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x251590u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x251594: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x251594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x251598: 0x82380b  movn        $a3, $a0, $v0
    ctx->pc = 0x251598u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 4));
    // 0x25159c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25159cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2515a0: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x2515a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x2515a4: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x2515a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
    // 0x2515a8: 0x2463ed80  addiu       $v1, $v1, -0x1280
    ctx->pc = 0x2515a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962560));
    // 0x2515ac: 0x24a5ec50  addiu       $a1, $a1, -0x13B0
    ctx->pc = 0x2515acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962256));
    // 0x2515b0: 0x73903  sra         $a3, $a3, 4
    ctx->pc = 0x2515b0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 4));
    // 0x2515b4: 0x24c61350  addiu       $a2, $a2, 0x1350
    ctx->pc = 0x2515b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4944));
    // 0x2515b8: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x2515b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x2515bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2515bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2515c0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2515c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2515c4: 0xa2090005  sb          $t1, 0x5($s0)
    ctx->pc = 0x2515c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 9));
    // 0x2515c8: 0xae050008  sw          $a1, 0x8($s0)
    ctx->pc = 0x2515c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
    // 0x2515cc: 0xae0a000c  sw          $t2, 0xC($s0)
    ctx->pc = 0x2515ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 10));
    // 0x2515d0: 0xae070010  sw          $a3, 0x10($s0)
    ctx->pc = 0x2515d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 7));
    // 0x2515d4: 0xae060028  sw          $a2, 0x28($s0)
    ctx->pc = 0x2515d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 6));
    // 0x2515d8: 0xc094608  jal         func_251820
    ctx->pc = 0x2515D8u;
    SET_GPR_U32(ctx, 31, 0x2515E0u);
    ctx->pc = 0x2515DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2515D8u;
    // 0x2515dc: 0xae10002c  sw          $s0, 0x2C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251820u, 0x2515D8u, 0x2515E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2515E0u;
label_2515e0:
    // 0x2515e0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2515e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2515e4:
    // 0x2515e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2515e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2515e8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2515e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2515ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2515ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2515F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2515ECu;
        // 0x2515f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2515ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2515F4u;
}
