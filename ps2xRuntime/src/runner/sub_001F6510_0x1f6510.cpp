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

// Function: sub_001F6510
// Address: 0x1f6510 - 0x1f6630
void sub_001F6510_0x1f6510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F6510_0x1f6510");
#endif

    ctx->pc = 0x1f6510u;

    // 0x1f6510: 0x248b0160  addiu       $t3, $a0, 0x160
    ctx->pc = 0x1f6510u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 352));
    // 0x1f6514: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f6514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f6518: 0x8d620430  lw          $v0, 0x430($t3)
    ctx->pc = 0x1f6518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1072)));
    // 0x1f651c: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x1f651cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6520: 0x8d640308  lw          $a0, 0x308($t3)
    ctx->pc = 0x1f6520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 776)));
    // 0x1f6524: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f6524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f6528: 0xad630420  sw          $v1, 0x420($t3)
    ctx->pc = 0x1f6528u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 1056), GPR_U32(ctx, 3));
    // 0x1f652c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F652Cu;
    {
        const bool branch_taken_0x1f652c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F652Cu;
        // 0x1f6530: 0xad620430  sw          $v0, 0x430($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 1072), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f652c) {
            ctx->pc = 0x1F6540u;
            goto label_1f6540;
        }
    }
    ctx->pc = 0x1F6534u;
    // 0x1f6534: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1f6534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f6538: 0x54820005  bnel        $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F6538u;
    {
        const bool branch_taken_0x1f6538 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f6538) {
            ctx->pc = 0x1F653Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F6538u;
            // 0x1f653c: 0x8d620494  lw          $v0, 0x494($t3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F6550u;
            goto label_1f6550;
        }
    }
    ctx->pc = 0x1F6540u;
label_1f6540:
    // 0x1f6540: 0x8d62030c  lw          $v0, 0x30C($t3)
    ctx->pc = 0x1f6540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 780)));
    // 0x1f6544: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F6544u;
    {
        const bool branch_taken_0x1f6544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6544u;
        // 0x1f6548: 0x2403fffc  addiu       $v1, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6544) {
            ctx->pc = 0x1F655Cu;
            goto label_1f655c;
        }
    }
    ctx->pc = 0x1F654Cu;
    // 0x1f654c: 0x8d620494  lw          $v0, 0x494($t3)
    ctx->pc = 0x1f654cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1172)));
label_1f6550:
    // 0x1f6550: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f6550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f6554: 0xad620494  sw          $v0, 0x494($t3)
    ctx->pc = 0x1f6554u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 1172), GPR_U32(ctx, 2));
    // 0x1f6558: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x1f6558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_1f655c:
    // 0x1f655c: 0x1831824  and         $v1, $t4, $v1
    ctx->pc = 0x1f655cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) & GPR_U64(ctx, 3));
    // 0x1f6560: 0x1833023  subu        $a2, $t4, $v1
    ctx->pc = 0x1f6560u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x1f6564: 0x806a0000  lb          $t2, 0x0($v1)
    ctx->pc = 0x1f6564u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f6568: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f6568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f656c: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x1f656cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1f6570: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x1f6570u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f6574: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f6574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f6578: 0x90670000  lbu         $a3, 0x0($v1)
    ctx->pc = 0x1f6578u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f657c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f657cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f6580: 0x90680000  lbu         $t0, 0x0($v1)
    ctx->pc = 0x1f6580u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f6584: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f6584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f6588: 0x80640000  lb          $a0, 0x0($v1)
    ctx->pc = 0x1f6588u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f658c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f658cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f6590: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1f6590u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f6594: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f6594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f6598: 0xa5200  sll         $t2, $t2, 8
    ctx->pc = 0x1f6598u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x1f659c: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x1f659cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x1f65a0: 0x1455025  or          $t2, $t2, $a1
    ctx->pc = 0x1f65a0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 5));
    // 0x1f65a4: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x1f65a4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f65a8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f65a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f65ac: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1f65acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1f65b0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1f65b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f65b4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f65b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f65b8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1f65b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1f65bc: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x1f65bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x1f65c0: 0x6c1823  subu        $v1, $v1, $t4
    ctx->pc = 0x1f65c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x1f65c4: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1f65c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1f65c8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1f65c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1f65cc: 0xa5200  sll         $t2, $t2, 8
    ctx->pc = 0x1f65ccu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x1f65d0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1f65d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1f65d4: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x1f65d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x1f65d8: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1f65d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1f65dc: 0x2462ffc7  addiu       $v0, $v1, -0x39
    ctx->pc = 0x1f65dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967239));
    // 0x1f65e0: 0x1475025  or          $t2, $t2, $a3
    ctx->pc = 0x1f65e0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 7));
    // 0x1f65e4: 0x28450000  slti        $a1, $v0, 0x0
    ctx->pc = 0x1f65e4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1f65e8: 0x2463ffce  addiu       $v1, $v1, -0x32
    ctx->pc = 0x1f65e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967246));
    // 0x1f65ec: 0xa5200  sll         $t2, $t2, 8
    ctx->pc = 0x1f65ecu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x1f65f0: 0x65100b  movn        $v0, $v1, $a1
    ctx->pc = 0x1f65f0u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x1f65f4: 0x64823  negu        $t1, $a2
    ctx->pc = 0x1f65f4u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x1f65f8: 0x1485025  or          $t2, $t2, $t0
    ctx->pc = 0x1f65f8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 8));
    // 0x1f65fc: 0x1242006  srlv        $a0, $a0, $t1
    ctx->pc = 0x1f65fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 9) & 0x1F));
    // 0x1f6600: 0xca5004  sllv        $t2, $t2, $a2
    ctx->pc = 0x1f6600u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 6) & 0x1F));
    // 0x1f6604: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x1f6604u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x1f6608: 0x1441825  or          $v1, $t2, $a0
    ctx->pc = 0x1f6608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) | GPR_U64(ctx, 4));
    // 0x1f660c: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F660Cu;
    {
        const bool branch_taken_0x1f660c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F660Cu;
        // 0x1f6610: 0x1821021  addu        $v0, $t4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f660c) {
            ctx->pc = 0x1F6620u;
            goto label_1f6620;
        }
    }
    ctx->pc = 0x1F6614u;
    // 0x1f6614: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F6614u;
    {
        const bool branch_taken_0x1f6614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6614u;
        // 0x1f6618: 0xad63002c  sw          $v1, 0x2C($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6614) {
            ctx->pc = 0x1F6624u;
            goto label_1f6624;
        }
    }
    ctx->pc = 0x1F661Cu;
    // 0x1f661c: 0x0  nop
    ctx->pc = 0x1f661cu;
    // NOP
label_1f6620:
    // 0x1f6620: 0xad6a002c  sw          $t2, 0x2C($t3)
    ctx->pc = 0x1f6620u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 44), GPR_U32(ctx, 10));
label_1f6624:
    // 0x1f6624: 0xad60030c  sw          $zero, 0x30C($t3)
    ctx->pc = 0x1f6624u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 780), GPR_U32(ctx, 0));
    // 0x1f6628: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F662Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6628u;
        // 0x1f662c: 0xad600308  sw          $zero, 0x308($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 776), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6630u;
}
