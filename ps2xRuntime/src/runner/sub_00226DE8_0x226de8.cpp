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

// Function: sub_00226DE8
// Address: 0x226de8 - 0x226edc
void sub_00226DE8_0x226de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226DE8_0x226de8");
#endif

    switch (ctx->pc) {
        case 0x226de8u: goto label_226de8;
        case 0x226decu: goto label_226dec;
        case 0x226df0u: goto label_226df0;
        case 0x226df4u: goto label_226df4;
        case 0x226df8u: goto label_226df8;
        case 0x226dfcu: goto label_226dfc;
        case 0x226e00u: goto label_226e00;
        case 0x226e04u: goto label_226e04;
        case 0x226e08u: goto label_226e08;
        case 0x226e0cu: goto label_226e0c;
        case 0x226e10u: goto label_226e10;
        case 0x226e14u: goto label_226e14;
        case 0x226e18u: goto label_226e18;
        case 0x226e1cu: goto label_226e1c;
        case 0x226e20u: goto label_226e20;
        case 0x226e24u: goto label_226e24;
        case 0x226e28u: goto label_226e28;
        case 0x226e2cu: goto label_226e2c;
        case 0x226e30u: goto label_226e30;
        case 0x226e34u: goto label_226e34;
        case 0x226e38u: goto label_226e38;
        case 0x226e3cu: goto label_226e3c;
        case 0x226e40u: goto label_226e40;
        case 0x226e44u: goto label_226e44;
        case 0x226e48u: goto label_226e48;
        case 0x226e4cu: goto label_226e4c;
        case 0x226e50u: goto label_226e50;
        case 0x226e54u: goto label_226e54;
        case 0x226e58u: goto label_226e58;
        case 0x226e5cu: goto label_226e5c;
        case 0x226e60u: goto label_226e60;
        case 0x226e64u: goto label_226e64;
        case 0x226e68u: goto label_226e68;
        case 0x226e6cu: goto label_226e6c;
        case 0x226e70u: goto label_226e70;
        case 0x226e74u: goto label_226e74;
        case 0x226e78u: goto label_226e78;
        case 0x226e7cu: goto label_226e7c;
        case 0x226e80u: goto label_226e80;
        case 0x226e84u: goto label_226e84;
        case 0x226e88u: goto label_226e88;
        case 0x226e8cu: goto label_226e8c;
        case 0x226e90u: goto label_226e90;
        case 0x226e94u: goto label_226e94;
        case 0x226e98u: goto label_226e98;
        case 0x226e9cu: goto label_226e9c;
        case 0x226ea0u: goto label_226ea0;
        case 0x226ea4u: goto label_226ea4;
        case 0x226ea8u: goto label_226ea8;
        case 0x226eacu: goto label_226eac;
        case 0x226eb0u: goto label_226eb0;
        case 0x226eb4u: goto label_226eb4;
        case 0x226eb8u: goto label_226eb8;
        case 0x226ebcu: goto label_226ebc;
        case 0x226ec0u: goto label_226ec0;
        case 0x226ec4u: goto label_226ec4;
        case 0x226ec8u: goto label_226ec8;
        case 0x226eccu: goto label_226ecc;
        case 0x226ed0u: goto label_226ed0;
        case 0x226ed4u: goto label_226ed4;
        case 0x226ed8u: goto label_226ed8;
        default: break;
    }

    ctx->pc = 0x226de8u;

label_226de8:
    // 0x226de8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x226de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_226dec:
    // 0x226dec: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x226decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_226df0:
    // 0x226df0: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x226df0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_226df4:
    // 0x226df4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x226df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_226df8:
    // 0x226df8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x226df8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_226dfc:
    // 0x226dfc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x226dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_226e00:
    // 0x226e00: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x226e00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_226e04:
    // 0x226e04: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x226e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_226e08:
    // 0x226e08: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x226e08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_226e0c:
    // 0x226e0c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x226e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_226e10:
    // 0x226e10: 0x26930400  addiu       $s3, $s4, 0x400
    ctx->pc = 0x226e10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 1024));
label_226e14:
    // 0x226e14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x226e14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_226e18:
    // 0x226e18: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x226e18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_226e1c:
    // 0x226e1c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x226e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_226e20:
    // 0x226e20: 0xc049590  jal         func_125640
label_226e24:
    if (ctx->pc == 0x226E24u) {
        ctx->pc = 0x226E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226E20u;
        // 0x226e24: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226E28u;
        goto label_226e28;
    }
    ctx->pc = 0x226E20u;
    SET_GPR_U32(ctx, 31, 0x226E28u);
    ctx->pc = 0x226E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226E20u;
    // 0x226e24: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x226E20u, 0x226E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226E28u;
label_226e28:
    // 0x226e28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x226e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_226e2c:
    // 0x226e2c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x226e2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_226e30:
    // 0x226e30: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x226e30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_226e34:
    // 0x226e34: 0xc089b10  jal         func_226C40
label_226e38:
    if (ctx->pc == 0x226E38u) {
        ctx->pc = 0x226E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226E34u;
        // 0x226e38: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226E3Cu;
        goto label_226e3c;
    }
    ctx->pc = 0x226E34u;
    SET_GPR_U32(ctx, 31, 0x226E3Cu);
    ctx->pc = 0x226E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226E34u;
    // 0x226e38: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226C40u, 0x226E34u, 0x226E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226E3Cu;
label_226e3c:
    // 0x226e3c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x226e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_226e40:
    // 0x226e40: 0x8e420044  lw          $v0, 0x44($s2)
    ctx->pc = 0x226e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_226e44:
    // 0x226e44: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x226e44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_226e48:
    // 0x226e48: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_226e4c:
    if (ctx->pc == 0x226E4Cu) {
        ctx->pc = 0x226E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226E48u;
        // 0x226e4c: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226E50u;
        goto label_226e50;
    }
    ctx->pc = 0x226E48u;
    {
        const bool branch_taken_0x226e48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x226E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226E48u;
        // 0x226e4c: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226e48) {
            ctx->pc = 0x226EB0u;
            goto label_226eb0;
        }
    }
    ctx->pc = 0x226E50u;
label_226e50:
    // 0x226e50: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x226e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_226e54:
    // 0x226e54: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
label_226e58:
    if (ctx->pc == 0x226E58u) {
        ctx->pc = 0x226E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226E54u;
        // 0x226e58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226E5Cu;
        goto label_226e5c;
    }
    ctx->pc = 0x226E54u;
    {
        const bool branch_taken_0x226e54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x226E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226E54u;
        // 0x226e58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226e54) {
            ctx->pc = 0x226E88u;
            goto label_226e88;
        }
    }
    ctx->pc = 0x226E5Cu;
label_226e5c:
    // 0x226e5c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x226e5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_226e60:
    // 0x226e60: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x226e60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_226e64:
    // 0x226e64: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x226e64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_226e68:
    // 0x226e68: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x226e68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_226e6c:
    // 0x226e6c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x226e6cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_226e70:
    // 0x226e70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x226e70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_226e74:
    // 0x226e74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x226e74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_226e78:
    // 0x226e78: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x226e78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_226e7c:
    // 0x226e7c: 0x8089bb8  j           func_226EE0
label_226e80:
    if (ctx->pc == 0x226E80u) {
        ctx->pc = 0x226E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226E7Cu;
        // 0x226e80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226E84u;
        goto label_226e84;
    }
    ctx->pc = 0x226E7Cu;
    ctx->pc = 0x226E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226E7Cu;
    // 0x226e80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226EE0u;
    sub_00226EE0_0x226ee0(rdram, ctx, runtime); return;
    ctx->pc = 0x226E84u;
label_226e84:
    // 0x226e84: 0x0  nop
    ctx->pc = 0x226e84u;
    // NOP
label_226e88:
    // 0x226e88: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x226e88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_226e8c:
    // 0x226e8c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x226e8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_226e90:
    // 0x226e90: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x226e90u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_226e94:
    // 0x226e94: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x226e94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_226e98:
    // 0x226e98: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x226e98u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_226e9c:
    // 0x226e9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x226e9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_226ea0:
    // 0x226ea0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x226ea0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_226ea4:
    // 0x226ea4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x226ea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_226ea8:
    // 0x226ea8: 0x8089bdc  j           func_226F70
label_226eac:
    if (ctx->pc == 0x226EACu) {
        ctx->pc = 0x226EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226EA8u;
        // 0x226eac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226EB0u;
        goto label_226eb0;
    }
    ctx->pc = 0x226EA8u;
    ctx->pc = 0x226EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226EA8u;
    // 0x226eac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226F70u;
    sub_00226F70_0x226f70(rdram, ctx, runtime); return;
    ctx->pc = 0x226EB0u;
label_226eb0:
    // 0x226eb0: 0xc64d0040  lwc1        $f13, 0x40($s2)
    ctx->pc = 0x226eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_226eb4:
    // 0x226eb4: 0x40f809  jalr        $v0
label_226eb8:
    if (ctx->pc == 0x226EB8u) {
        ctx->pc = 0x226EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226EB4u;
        // 0x226eb8: 0xc64c003c  lwc1        $f12, 0x3C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x226EBCu;
        goto label_226ebc;
    }
    ctx->pc = 0x226EB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x226EBCu);
        ctx->pc = 0x226EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226EB4u;
        // 0x226eb8: 0xc64c003c  lwc1        $f12, 0x3C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226EB4u, 0x226EBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x226EBCu;
label_226ebc:
    // 0x226ebc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x226ebcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_226ec0:
    // 0x226ec0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x226ec0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_226ec4:
    // 0x226ec4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x226ec4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_226ec8:
    // 0x226ec8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x226ec8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_226ecc:
    // 0x226ecc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x226eccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_226ed0:
    // 0x226ed0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x226ed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_226ed4:
    // 0x226ed4: 0x3e00008  jr          $ra
label_226ed8:
    if (ctx->pc == 0x226ED8u) {
        ctx->pc = 0x226ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226ED4u;
        // 0x226ed8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226EDCu;
        goto label_fallthrough_0x226ed4;
    }
    ctx->pc = 0x226ED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226ED4u;
        // 0x226ed8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226ED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x226ed4:
    ctx->pc = 0x226EDCu;
}
