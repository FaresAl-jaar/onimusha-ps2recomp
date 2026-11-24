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

// Function: sub_0023CB40
// Address: 0x23cb40 - 0x23ccb0
void sub_0023CB40_0x23cb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023CB40_0x23cb40");
#endif

    switch (ctx->pc) {
        case 0x23cba8u: goto label_23cba8;
        case 0x23cbecu: goto label_23cbec;
        case 0x23cc28u: goto label_23cc28;
        case 0x23cc3cu: goto label_23cc3c;
        case 0x23cc6cu: goto label_23cc6c;
        case 0x23cc78u: goto label_23cc78;
        default: break;
    }

    ctx->pc = 0x23cb40u;

    // 0x23cb40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23cb40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23cb44: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23cb44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x23cb48: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x23cb48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cb4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23cb4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23cb50: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x23cb50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cb54: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23cb54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23cb58: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x23cb58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cb5c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x23cb5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x23cb60: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x23CB60u;
    {
        const bool branch_taken_0x23cb60 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CB60u;
        // 0x23cb64: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cb60) {
            ctx->pc = 0x23CB78u;
            goto label_23cb78;
        }
    }
    ctx->pc = 0x23CB68u;
    // 0x23cb68: 0x52200004  beql        $s1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x23CB68u;
    {
        const bool branch_taken_0x23cb68 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x23cb68) {
            ctx->pc = 0x23CB6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CB68u;
            // 0x23cb6c: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CB7Cu;
            goto label_23cb7c;
        }
    }
    ctx->pc = 0x23CB70u;
    // 0x23cb70: 0x601000b  bgez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x23CB70u;
    {
        const bool branch_taken_0x23cb70 = (GPR_S64(ctx, 16) >= 0);
        if (branch_taken_0x23cb70) {
            ctx->pc = 0x23CBA0u;
            goto label_23cba0;
        }
    }
    ctx->pc = 0x23CB78u;
label_23cb78:
    // 0x23cb78: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x23cb78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_23cb7c:
    // 0x23cb7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23cb7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23cb80: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23cb80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23cb84: 0x2484b850  addiu       $a0, $a0, -0x47B0
    ctx->pc = 0x23cb84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948944));
    // 0x23cb88: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23cb88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23cb8c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x23cb8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23cb90: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23cb90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23cb94: 0x808baa4  j           func_22EA90
    ctx->pc = 0x23CB94u;
    ctx->pc = 0x23CB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CB94u;
    // 0x23cb98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA90u;
    sub_0022EA90_0x22ea90(rdram, ctx, runtime); return;
    ctx->pc = 0x23CB9Cu;
    // 0x23cb9c: 0x0  nop
    ctx->pc = 0x23cb9cu;
    // NOP
label_23cba0:
    // 0x23cba0: 0xc08e6f4  jal         func_239BD0
    ctx->pc = 0x23CBA0u;
    SET_GPR_U32(ctx, 31, 0x23CBA8u);
    ctx->pc = 0x23CBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CBA0u;
    // 0x23cba4: 0x3c1300ff  lui         $s3, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)255 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239BD0u, 0x23CBA0u, 0x23CBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CBA8u;
label_23cba8:
    // 0x23cba8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x23cba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x23cbac: 0x32a03  sra         $a1, $v1, 8
    ctx->pc = 0x23cbacu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 8));
    // 0x23cbb0: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x23cbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x23cbb4: 0x31602  srl         $v0, $v1, 24
    ctx->pc = 0x23cbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 24));
    // 0x23cbb8: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x23cbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x23cbbc: 0x932024  and         $a0, $a0, $s3
    ctx->pc = 0x23cbbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 19));
    // 0x23cbc0: 0x30a5ff00  andi        $a1, $a1, 0xFF00
    ctx->pc = 0x23cbc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65280);
    // 0x23cbc4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x23cbc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x23cbc8: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x23cbc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x23cbcc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x23cbccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x23cbd0: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x23cbd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x23cbd4: 0x50400030  beql        $v0, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x23CBD4u;
    {
        const bool branch_taken_0x23cbd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23cbd4) {
            ctx->pc = 0x23CBD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CBD4u;
            // 0x23cbd8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CC98u;
            goto label_23cc98;
        }
    }
    ctx->pc = 0x23CBDCu;
    // 0x23cbdc: 0x602002e  bltzl       $s0, . + 4 + (0x2E << 2)
    ctx->pc = 0x23CBDCu;
    {
        const bool branch_taken_0x23cbdc = (GPR_S64(ctx, 16) < 0);
        if (branch_taken_0x23cbdc) {
            ctx->pc = 0x23CBE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CBDCu;
            // 0x23cbe0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CC98u;
            goto label_23cc98;
        }
    }
    ctx->pc = 0x23CBE4u;
    // 0x23cbe4: 0xc08b528  jal         func_22D4A0
    ctx->pc = 0x23CBE4u;
    SET_GPR_U32(ctx, 31, 0x23CBECu);
    ctx->pc = 0x22D4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4A0u, 0x23CBE4u, 0x23CBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CBECu;
label_23cbec:
    // 0x23cbec: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x23cbecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x23cbf0: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x23cbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x23cbf4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x23cbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x23cbf8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x23cbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x23cbfc: 0x33203  sra         $a2, $v1, 8
    ctx->pc = 0x23cbfcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 8));
    // 0x23cc00: 0x31200  sll         $v0, $v1, 8
    ctx->pc = 0x23cc00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x23cc04: 0x30c6ff00  andi        $a2, $a2, 0xFF00
    ctx->pc = 0x23cc04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65280);
    // 0x23cc08: 0x32602  srl         $a0, $v1, 24
    ctx->pc = 0x23cc08u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 24));
    // 0x23cc0c: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x23cc0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x23cc10: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x23cc10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x23cc14: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x23cc14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x23cc18: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x23cc18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x23cc1c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x23cc1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x23cc20: 0xc093fa6  jal         func_24FE98
    ctx->pc = 0x23CC20u;
    SET_GPR_U32(ctx, 31, 0x23CC28u);
    ctx->pc = 0x23CC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CC20u;
    // 0x23cc24: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FE98u, 0x23CC20u, 0x23CC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CC28u;
label_23cc28:
    // 0x23cc28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23cc28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cc2c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x23CC2Cu;
    {
        const bool branch_taken_0x23cc2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23CC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CC2Cu;
        // 0x23cc30: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cc2c) {
            ctx->pc = 0x23CC60u;
            goto label_23cc60;
        }
    }
    ctx->pc = 0x23CC34u;
    // 0x23cc34: 0xc08b52e  jal         func_22D4B8
    ctx->pc = 0x23CC34u;
    SET_GPR_U32(ctx, 31, 0x23CC3Cu);
    ctx->pc = 0x22D4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4B8u, 0x23CC34u, 0x23CC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CC3Cu;
label_23cc3c:
    // 0x23cc3c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x23cc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x23cc40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23cc40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23cc44: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x23cc44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    // 0x23cc48: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23cc48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23cc4c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23cc4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23cc50: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x23cc50u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23cc54: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23cc54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23cc58: 0x808baa4  j           func_22EA90
    ctx->pc = 0x23CC58u;
    ctx->pc = 0x23CC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CC58u;
    // 0x23cc5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA90u;
    sub_0022EA90_0x22ea90(rdram, ctx, runtime); return;
    ctx->pc = 0x23CC60u;
label_23cc60:
    // 0x23cc60: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23cc60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23cc64: 0xc08e618  jal         func_239860
    ctx->pc = 0x23CC64u;
    SET_GPR_U32(ctx, 31, 0x23CC6Cu);
    ctx->pc = 0x23CC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CC64u;
    // 0x23cc68: 0xa2420002  sb          $v0, 0x2($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239860u, 0x23CC64u, 0x23CC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CC6Cu;
label_23cc6c:
    // 0x23cc6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23cc6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cc70: 0xc08efaa  jal         func_23BEA8
    ctx->pc = 0x23CC70u;
    SET_GPR_U32(ctx, 31, 0x23CC78u);
    ctx->pc = 0x23CC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CC70u;
    // 0x23cc74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23BEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BEA8u, 0x23CC70u, 0x23CC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CC78u;
label_23cc78:
    // 0x23cc78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23cc78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23cc7c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23cc7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23cc80: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23cc80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23cc84: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x23cc84u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23cc88: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23cc88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23cc8c: 0x808b52e  j           func_22D4B8
    ctx->pc = 0x23CC8Cu;
    ctx->pc = 0x23CC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CC8Cu;
    // 0x23cc90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4B8u;
    sub_0022D4B8_0x22d4b8(rdram, ctx, runtime); return;
    ctx->pc = 0x23CC94u;
    // 0x23cc94: 0x0  nop
    ctx->pc = 0x23cc94u;
    // NOP
label_23cc98:
    // 0x23cc98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23cc98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23cc9c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23cc9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23cca0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x23cca0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23cca4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23cca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23cca8: 0x3e00008  jr          $ra
    ctx->pc = 0x23CCA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23CCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CCA8u;
        // 0x23ccac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23CCA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23CCB0u;
}
