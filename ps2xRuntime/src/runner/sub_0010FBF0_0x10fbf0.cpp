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

// Function: sub_0010FBF0
// Address: 0x10fbf0 - 0x10fdc8
void sub_0010FBF0_0x10fbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010FBF0_0x10fbf0");
#endif

    switch (ctx->pc) {
        case 0x10fbf0u: goto label_10fbf0;
        case 0x10fbf4u: goto label_10fbf4;
        case 0x10fbf8u: goto label_10fbf8;
        case 0x10fbfcu: goto label_10fbfc;
        case 0x10fc00u: goto label_10fc00;
        case 0x10fc04u: goto label_10fc04;
        case 0x10fc08u: goto label_10fc08;
        case 0x10fc0cu: goto label_10fc0c;
        case 0x10fc10u: goto label_10fc10;
        case 0x10fc14u: goto label_10fc14;
        case 0x10fc18u: goto label_10fc18;
        case 0x10fc1cu: goto label_10fc1c;
        case 0x10fc20u: goto label_10fc20;
        case 0x10fc24u: goto label_10fc24;
        case 0x10fc28u: goto label_10fc28;
        case 0x10fc2cu: goto label_10fc2c;
        case 0x10fc30u: goto label_10fc30;
        case 0x10fc34u: goto label_10fc34;
        case 0x10fc38u: goto label_10fc38;
        case 0x10fc3cu: goto label_10fc3c;
        case 0x10fc40u: goto label_10fc40;
        case 0x10fc44u: goto label_10fc44;
        case 0x10fc48u: goto label_10fc48;
        case 0x10fc4cu: goto label_10fc4c;
        case 0x10fc50u: goto label_10fc50;
        case 0x10fc54u: goto label_10fc54;
        case 0x10fc58u: goto label_10fc58;
        case 0x10fc5cu: goto label_10fc5c;
        case 0x10fc60u: goto label_10fc60;
        case 0x10fc64u: goto label_10fc64;
        case 0x10fc68u: goto label_10fc68;
        case 0x10fc6cu: goto label_10fc6c;
        case 0x10fc70u: goto label_10fc70;
        case 0x10fc74u: goto label_10fc74;
        case 0x10fc78u: goto label_10fc78;
        case 0x10fc7cu: goto label_10fc7c;
        case 0x10fc80u: goto label_10fc80;
        case 0x10fc84u: goto label_10fc84;
        case 0x10fc88u: goto label_10fc88;
        case 0x10fc8cu: goto label_10fc8c;
        case 0x10fc90u: goto label_10fc90;
        case 0x10fc94u: goto label_10fc94;
        case 0x10fc98u: goto label_10fc98;
        case 0x10fc9cu: goto label_10fc9c;
        case 0x10fca0u: goto label_10fca0;
        case 0x10fca4u: goto label_10fca4;
        case 0x10fca8u: goto label_10fca8;
        case 0x10fcacu: goto label_10fcac;
        case 0x10fcb0u: goto label_10fcb0;
        case 0x10fcb4u: goto label_10fcb4;
        case 0x10fcb8u: goto label_10fcb8;
        case 0x10fcbcu: goto label_10fcbc;
        case 0x10fcc0u: goto label_10fcc0;
        case 0x10fcc4u: goto label_10fcc4;
        case 0x10fcc8u: goto label_10fcc8;
        case 0x10fcccu: goto label_10fccc;
        case 0x10fcd0u: goto label_10fcd0;
        case 0x10fcd4u: goto label_10fcd4;
        case 0x10fcd8u: goto label_10fcd8;
        case 0x10fcdcu: goto label_10fcdc;
        case 0x10fce0u: goto label_10fce0;
        case 0x10fce4u: goto label_10fce4;
        case 0x10fce8u: goto label_10fce8;
        case 0x10fcecu: goto label_10fcec;
        case 0x10fcf0u: goto label_10fcf0;
        case 0x10fcf4u: goto label_10fcf4;
        case 0x10fcf8u: goto label_10fcf8;
        case 0x10fcfcu: goto label_10fcfc;
        case 0x10fd00u: goto label_10fd00;
        case 0x10fd04u: goto label_10fd04;
        case 0x10fd08u: goto label_10fd08;
        case 0x10fd0cu: goto label_10fd0c;
        case 0x10fd10u: goto label_10fd10;
        case 0x10fd14u: goto label_10fd14;
        case 0x10fd18u: goto label_10fd18;
        case 0x10fd1cu: goto label_10fd1c;
        case 0x10fd20u: goto label_10fd20;
        case 0x10fd24u: goto label_10fd24;
        case 0x10fd28u: goto label_10fd28;
        case 0x10fd2cu: goto label_10fd2c;
        case 0x10fd30u: goto label_10fd30;
        case 0x10fd34u: goto label_10fd34;
        case 0x10fd38u: goto label_10fd38;
        case 0x10fd3cu: goto label_10fd3c;
        case 0x10fd40u: goto label_10fd40;
        case 0x10fd44u: goto label_10fd44;
        case 0x10fd48u: goto label_10fd48;
        case 0x10fd4cu: goto label_10fd4c;
        case 0x10fd50u: goto label_10fd50;
        case 0x10fd54u: goto label_10fd54;
        case 0x10fd58u: goto label_10fd58;
        case 0x10fd5cu: goto label_10fd5c;
        case 0x10fd60u: goto label_10fd60;
        case 0x10fd64u: goto label_10fd64;
        case 0x10fd68u: goto label_10fd68;
        case 0x10fd6cu: goto label_10fd6c;
        case 0x10fd70u: goto label_10fd70;
        case 0x10fd74u: goto label_10fd74;
        case 0x10fd78u: goto label_10fd78;
        case 0x10fd7cu: goto label_10fd7c;
        case 0x10fd80u: goto label_10fd80;
        case 0x10fd84u: goto label_10fd84;
        case 0x10fd88u: goto label_10fd88;
        case 0x10fd8cu: goto label_10fd8c;
        case 0x10fd90u: goto label_10fd90;
        case 0x10fd94u: goto label_10fd94;
        case 0x10fd98u: goto label_10fd98;
        case 0x10fd9cu: goto label_10fd9c;
        case 0x10fda0u: goto label_10fda0;
        case 0x10fda4u: goto label_10fda4;
        case 0x10fda8u: goto label_10fda8;
        case 0x10fdacu: goto label_10fdac;
        case 0x10fdb0u: goto label_10fdb0;
        case 0x10fdb4u: goto label_10fdb4;
        case 0x10fdb8u: goto label_10fdb8;
        case 0x10fdbcu: goto label_10fdbc;
        case 0x10fdc0u: goto label_10fdc0;
        case 0x10fdc4u: goto label_10fdc4;
        default: break;
    }

    ctx->pc = 0x10fbf0u;

label_10fbf0:
    // 0x10fbf0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x10fbf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_10fbf4:
    // 0x10fbf4: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x10fbf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_10fbf8:
    // 0x10fbf8: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x10fbf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_10fbfc:
    // 0x10fbfc: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x10fbfcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_10fc00:
    // 0x10fc00: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x10fc00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_10fc04:
    // 0x10fc04: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x10fc04u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10fc08:
    // 0x10fc08: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10fc08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_10fc0c:
    // 0x10fc0c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x10fc0cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10fc10:
    // 0x10fc10: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10fc10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_10fc14:
    // 0x10fc14: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x10fc14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10fc18:
    // 0x10fc18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10fc18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_10fc1c:
    // 0x10fc1c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x10fc1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_10fc20:
    // 0x10fc20: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x10fc20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_10fc24:
    // 0x10fc24: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x10fc24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_10fc28:
    // 0x10fc28: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x10fc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_10fc2c:
    // 0x10fc2c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_10fc30:
    if (ctx->pc == 0x10FC30u) {
        ctx->pc = 0x10FC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FC2Cu;
        // 0x10fc30: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FC34u;
        goto label_10fc34;
    }
    ctx->pc = 0x10FC2Cu;
    {
        const bool branch_taken_0x10fc2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10FC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FC2Cu;
        // 0x10fc30: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fc2c) {
            ctx->pc = 0x10FC3Cu;
            goto label_10fc3c;
        }
    }
    ctx->pc = 0x10FC34u;
label_10fc34:
    // 0x10fc34: 0x1000005a  b           . + 4 + (0x5A << 2)
label_10fc38:
    if (ctx->pc == 0x10FC38u) {
        ctx->pc = 0x10FC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FC34u;
        // 0x10fc38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FC3Cu;
        goto label_10fc3c;
    }
    ctx->pc = 0x10FC34u;
    {
        const bool branch_taken_0x10fc34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FC34u;
        // 0x10fc38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fc34) {
            ctx->pc = 0x10FDA0u;
            goto label_10fda0;
        }
    }
    ctx->pc = 0x10FC3Cu;
label_10fc3c:
    // 0x10fc3c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x10fc3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10fc40:
    // 0x10fc40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10fc40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10fc44:
    // 0x10fc44: 0xc04bb8e  jal         func_12EE38
label_10fc48:
    if (ctx->pc == 0x10FC48u) {
        ctx->pc = 0x10FC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FC44u;
        // 0x10fc48: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FC4Cu;
        goto label_10fc4c;
    }
    ctx->pc = 0x10FC44u;
    SET_GPR_U32(ctx, 31, 0x10FC4Cu);
    ctx->pc = 0x10FC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FC44u;
    // 0x10fc48: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE38u, 0x10FC44u, 0x10FC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FC4Cu;
label_10fc4c:
    // 0x10fc4c: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
label_10fc50:
    if (ctx->pc == 0x10FC50u) {
        ctx->pc = 0x10FC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FC4Cu;
        // 0x10fc50: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FC54u;
        goto label_10fc54;
    }
    ctx->pc = 0x10FC4Cu;
    {
        const bool branch_taken_0x10fc4c = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x10FC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FC4Cu;
        // 0x10fc50: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fc4c) {
            ctx->pc = 0x10FC80u;
            goto label_10fc80;
        }
    }
    ctx->pc = 0x10FC54u;
label_10fc54:
    // 0x10fc54: 0xc04ba4c  jal         func_12E930
label_10fc58:
    if (ctx->pc == 0x10FC58u) {
        ctx->pc = 0x10FC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FC54u;
        // 0x10fc58: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FC5Cu;
        goto label_10fc5c;
    }
    ctx->pc = 0x10FC54u;
    SET_GPR_U32(ctx, 31, 0x10FC5Cu);
    ctx->pc = 0x10FC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FC54u;
    // 0x10fc58: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E930u, 0x10FC54u, 0x10FC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FC5Cu;
label_10fc5c:
    // 0x10fc5c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x10fc5cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10fc60:
    // 0x10fc60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10fc60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10fc64:
    // 0x10fc64: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x10fc64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_10fc68:
    // 0x10fc68: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10fc68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10fc6c:
    // 0x10fc6c: 0x2a0f809  jalr        $s5
label_10fc70:
    if (ctx->pc == 0x10FC70u) {
        ctx->pc = 0x10FC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FC6Cu;
        // 0x10fc70: 0x2406002d  addiu       $a2, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FC74u;
        goto label_10fc74;
    }
    ctx->pc = 0x10FC6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x10FC74u);
        ctx->pc = 0x10FC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FC6Cu;
        // 0x10fc70: 0x2406002d  addiu       $a2, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FC6Cu, 0x10FC74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10FC74u;
label_10fc74:
    // 0x10fc74: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x10fc74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_10fc78:
    // 0x10fc78: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x10fc78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_10fc7c:
    // 0x10fc7c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x10fc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_10fc80:
    // 0x10fc80: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x10fc80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
label_10fc84:
    // 0x10fc84: 0xdc252498  ld          $a1, 0x2498($at)
    ctx->pc = 0x10fc84u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 9368)));
label_10fc88:
    // 0x10fc88: 0xc04bb8e  jal         func_12EE38
label_10fc8c:
    if (ctx->pc == 0x10FC8Cu) {
        ctx->pc = 0x10FC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FC88u;
        // 0x10fc8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FC90u;
        goto label_10fc90;
    }
    ctx->pc = 0x10FC88u;
    SET_GPR_U32(ctx, 31, 0x10FC90u);
    ctx->pc = 0x10FC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FC88u;
    // 0x10fc8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE38u, 0x10FC88u, 0x10FC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FC90u;
label_10fc90:
    // 0x10fc90: 0x4410010  bgez        $v0, . + 4 + (0x10 << 2)
label_10fc94:
    if (ctx->pc == 0x10FC94u) {
        ctx->pc = 0x10FC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FC90u;
        // 0x10fc94: 0x3c130066  lui         $s3, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FC98u;
        goto label_10fc98;
    }
    ctx->pc = 0x10FC90u;
    {
        const bool branch_taken_0x10fc90 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x10FC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FC90u;
        // 0x10fc94: 0x3c130066  lui         $s3, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fc90) {
            ctx->pc = 0x10FCD4u;
            goto label_10fcd4;
        }
    }
    ctx->pc = 0x10FC98u;
label_10fc98:
    // 0x10fc98: 0x10000006  b           . + 4 + (0x6 << 2)
label_10fc9c:
    if (ctx->pc == 0x10FC9Cu) {
        ctx->pc = 0x10FCA0u;
        goto label_10fca0;
    }
    ctx->pc = 0x10FC98u;
    {
        const bool branch_taken_0x10fc98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10fc98) {
            ctx->pc = 0x10FCB4u;
            goto label_10fcb4;
        }
    }
    ctx->pc = 0x10FCA0u;
label_10fca0:
    // 0x10fca0: 0x34058048  ori         $a1, $zero, 0x8048
    ctx->pc = 0x10fca0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
label_10fca4:
    // 0x10fca4: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x10fca4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
label_10fca8:
    // 0x10fca8: 0xc04ba66  jal         func_12E998
label_10fcac:
    if (ctx->pc == 0x10FCACu) {
        ctx->pc = 0x10FCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FCA8u;
        // 0x10fcac: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FCB0u;
        goto label_10fcb0;
    }
    ctx->pc = 0x10FCA8u;
    SET_GPR_U32(ctx, 31, 0x10FCB0u);
    ctx->pc = 0x10FCACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FCA8u;
    // 0x10fcac: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x10FCA8u, 0x10FCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FCB0u;
label_10fcb0:
    // 0x10fcb0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10fcb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10fcb4:
    // 0x10fcb4: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x10fcb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
label_10fcb8:
    // 0x10fcb8: 0xdc2524a0  ld          $a1, 0x24A0($at)
    ctx->pc = 0x10fcb8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 9376)));
label_10fcbc:
    // 0x10fcbc: 0xc04bb8e  jal         func_12EE38
label_10fcc0:
    if (ctx->pc == 0x10FCC0u) {
        ctx->pc = 0x10FCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FCBCu;
        // 0x10fcc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FCC4u;
        goto label_10fcc4;
    }
    ctx->pc = 0x10FCBCu;
    SET_GPR_U32(ctx, 31, 0x10FCC4u);
    ctx->pc = 0x10FCC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FCBCu;
    // 0x10fcc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE38u, 0x10FCBCu, 0x10FCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FCC4u;
label_10fcc4:
    // 0x10fcc4: 0x440fff6  bltz        $v0, . + 4 + (-0xA << 2)
label_10fcc8:
    if (ctx->pc == 0x10FCC8u) {
        ctx->pc = 0x10FCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FCC4u;
        // 0x10fcc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FCCCu;
        goto label_10fccc;
    }
    ctx->pc = 0x10FCC4u;
    {
        const bool branch_taken_0x10fcc4 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x10FCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FCC4u;
        // 0x10fcc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fcc4) {
            ctx->pc = 0x10FCA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10fca0;
        }
    }
    ctx->pc = 0x10FCCCu;
label_10fccc:
    // 0x10fccc: 0x10000015  b           . + 4 + (0x15 << 2)
label_10fcd0:
    if (ctx->pc == 0x10FCD0u) {
        ctx->pc = 0x10FCD4u;
        goto label_10fcd4;
    }
    ctx->pc = 0x10FCCCu;
    {
        const bool branch_taken_0x10fccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10fccc) {
            ctx->pc = 0x10FD24u;
            goto label_10fd24;
        }
    }
    ctx->pc = 0x10FCD4u;
label_10fcd4:
    // 0x10fcd4: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x10fcd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
label_10fcd8:
    // 0x10fcd8: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x10fcd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
label_10fcdc:
    // 0x10fcdc: 0xc04bb8e  jal         func_12EE38
label_10fce0:
    if (ctx->pc == 0x10FCE0u) {
        ctx->pc = 0x10FCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FCDCu;
        // 0x10fce0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FCE4u;
        goto label_10fce4;
    }
    ctx->pc = 0x10FCDCu;
    SET_GPR_U32(ctx, 31, 0x10FCE4u);
    ctx->pc = 0x10FCE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FCDCu;
    // 0x10fce0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE38u, 0x10FCDCu, 0x10FCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FCE4u;
label_10fce4:
    // 0x10fce4: 0x440000f  bltz        $v0, . + 4 + (0xF << 2)
label_10fce8:
    if (ctx->pc == 0x10FCE8u) {
        ctx->pc = 0x10FCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FCE4u;
        // 0x10fce8: 0x3c130066  lui         $s3, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FCECu;
        goto label_10fcec;
    }
    ctx->pc = 0x10FCE4u;
    {
        const bool branch_taken_0x10fce4 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x10FCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FCE4u;
        // 0x10fce8: 0x3c130066  lui         $s3, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fce4) {
            ctx->pc = 0x10FD24u;
            goto label_10fd24;
        }
    }
    ctx->pc = 0x10FCECu;
label_10fcec:
    // 0x10fcec: 0x10000007  b           . + 4 + (0x7 << 2)
label_10fcf0:
    if (ctx->pc == 0x10FCF0u) {
        ctx->pc = 0x10FCF4u;
        goto label_10fcf4;
    }
    ctx->pc = 0x10FCECu;
    {
        const bool branch_taken_0x10fcec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10fcec) {
            ctx->pc = 0x10FD0Cu;
            goto label_10fd0c;
        }
    }
    ctx->pc = 0x10FCF4u;
label_10fcf4:
    // 0x10fcf4: 0x0  nop
    ctx->pc = 0x10fcf4u;
    // NOP
label_10fcf8:
    // 0x10fcf8: 0x34058048  ori         $a1, $zero, 0x8048
    ctx->pc = 0x10fcf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
label_10fcfc:
    // 0x10fcfc: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x10fcfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
label_10fd00:
    // 0x10fd00: 0xc04bafa  jal         func_12EBE8
label_10fd04:
    if (ctx->pc == 0x10FD04u) {
        ctx->pc = 0x10FD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FD00u;
        // 0x10fd04: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FD08u;
        goto label_10fd08;
    }
    ctx->pc = 0x10FD00u;
    SET_GPR_U32(ctx, 31, 0x10FD08u);
    ctx->pc = 0x10FD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FD00u;
    // 0x10fd04: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EBE8u, 0x10FD00u, 0x10FD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FD08u;
label_10fd08:
    // 0x10fd08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10fd08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10fd0c:
    // 0x10fd0c: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x10fd0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
label_10fd10:
    // 0x10fd10: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x10fd10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
label_10fd14:
    // 0x10fd14: 0xc04bb8e  jal         func_12EE38
label_10fd18:
    if (ctx->pc == 0x10FD18u) {
        ctx->pc = 0x10FD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FD14u;
        // 0x10fd18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FD1Cu;
        goto label_10fd1c;
    }
    ctx->pc = 0x10FD14u;
    SET_GPR_U32(ctx, 31, 0x10FD1Cu);
    ctx->pc = 0x10FD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FD14u;
    // 0x10fd18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE38u, 0x10FD14u, 0x10FD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FD1Cu;
label_10fd1c:
    // 0x10fd1c: 0x441fff6  bgez        $v0, . + 4 + (-0xA << 2)
label_10fd20:
    if (ctx->pc == 0x10FD20u) {
        ctx->pc = 0x10FD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FD1Cu;
        // 0x10fd20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FD24u;
        goto label_10fd24;
    }
    ctx->pc = 0x10FD1Cu;
    {
        const bool branch_taken_0x10fd1c = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x10FD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FD1Cu;
        // 0x10fd20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fd1c) {
            ctx->pc = 0x10FCF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10fcf8;
        }
    }
    ctx->pc = 0x10FD24u;
label_10fd24:
    // 0x10fd24: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x10fd24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
label_10fd28:
    // 0x10fd28: 0xdc2524a8  ld          $a1, 0x24A8($at)
    ctx->pc = 0x10fd28u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 9384)));
label_10fd2c:
    // 0x10fd2c: 0xc04ba66  jal         func_12E998
label_10fd30:
    if (ctx->pc == 0x10FD30u) {
        ctx->pc = 0x10FD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FD2Cu;
        // 0x10fd30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FD34u;
        goto label_10fd34;
    }
    ctx->pc = 0x10FD2Cu;
    SET_GPR_U32(ctx, 31, 0x10FD34u);
    ctx->pc = 0x10FD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FD2Cu;
    // 0x10fd30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x10FD2Cu, 0x10FD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FD34u;
label_10fd34:
    // 0x10fd34: 0xc04b104  jal         func_12C410
label_10fd38:
    if (ctx->pc == 0x10FD38u) {
        ctx->pc = 0x10FD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FD34u;
        // 0x10fd38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FD3Cu;
        goto label_10fd3c;
    }
    ctx->pc = 0x10FD34u;
    SET_GPR_U32(ctx, 31, 0x10FD3Cu);
    ctx->pc = 0x10FD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FD34u;
    // 0x10fd38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C410u, 0x10FD34u, 0x10FD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FD3Cu;
label_10fd3c:
    // 0x10fd3c: 0xc043ed8  jal         func_10FB60
label_10fd40:
    if (ctx->pc == 0x10FD40u) {
        ctx->pc = 0x10FD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FD3Cu;
        // 0x10fd40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FD44u;
        goto label_10fd44;
    }
    ctx->pc = 0x10FD3Cu;
    SET_GPR_U32(ctx, 31, 0x10FD44u);
    ctx->pc = 0x10FD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FD3Cu;
    // 0x10fd40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FB60u, 0x10FD3Cu, 0x10FD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FD44u;
label_10fd44:
    // 0x10fd44: 0x26672480  addiu       $a3, $s3, 0x2480
    ctx->pc = 0x10fd44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 9344));
label_10fd48:
    // 0x10fd48: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x10fd48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10fd4c:
    // 0x10fd4c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x10fd4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_10fd50:
    // 0x10fd50: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x10fd50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_10fd54:
    // 0x10fd54: 0xc0442e2  jal         func_110B88
label_10fd58:
    if (ctx->pc == 0x10FD58u) {
        ctx->pc = 0x10FD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FD54u;
        // 0x10fd58: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FD5Cu;
        goto label_10fd5c;
    }
    ctx->pc = 0x10FD54u;
    SET_GPR_U32(ctx, 31, 0x10FD5Cu);
    ctx->pc = 0x10FD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FD54u;
    // 0x10fd58: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110B88u, 0x10FD54u, 0x10FD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FD5Cu;
label_10fd5c:
    // 0x10fd5c: 0x6400007  bltz        $s2, . + 4 + (0x7 << 2)
label_10fd60:
    if (ctx->pc == 0x10FD60u) {
        ctx->pc = 0x10FD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FD5Cu;
        // 0x10fd60: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FD64u;
        goto label_10fd64;
    }
    ctx->pc = 0x10FD5Cu;
    {
        const bool branch_taken_0x10fd5c = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x10FD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FD5Cu;
        // 0x10fd60: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fd5c) {
            ctx->pc = 0x10FD7Cu;
            goto label_10fd7c;
        }
    }
    ctx->pc = 0x10FD64u;
label_10fd64:
    // 0x10fd64: 0x3c070066  lui         $a3, 0x66
    ctx->pc = 0x10fd64u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)102 << 16));
label_10fd68:
    // 0x10fd68: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x10fd68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_10fd6c:
    // 0x10fd6c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x10fd6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_10fd70:
    // 0x10fd70: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x10fd70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10fd74:
    // 0x10fd74: 0x10000006  b           . + 4 + (0x6 << 2)
label_10fd78:
    if (ctx->pc == 0x10FD78u) {
        ctx->pc = 0x10FD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FD74u;
        // 0x10fd78: 0x24e72488  addiu       $a3, $a3, 0x2488 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FD7Cu;
        goto label_10fd7c;
    }
    ctx->pc = 0x10FD74u;
    {
        const bool branch_taken_0x10fd74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FD74u;
        // 0x10fd78: 0x24e72488  addiu       $a3, $a3, 0x2488 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fd74) {
            ctx->pc = 0x10FD90u;
            goto label_10fd90;
        }
    }
    ctx->pc = 0x10FD7Cu;
label_10fd7c:
    // 0x10fd7c: 0x3c070066  lui         $a3, 0x66
    ctx->pc = 0x10fd7cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)102 << 16));
label_10fd80:
    // 0x10fd80: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x10fd80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_10fd84:
    // 0x10fd84: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x10fd84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_10fd88:
    // 0x10fd88: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x10fd88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10fd8c:
    // 0x10fd8c: 0x24e72490  addiu       $a3, $a3, 0x2490
    ctx->pc = 0x10fd8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9360));
label_10fd90:
    // 0x10fd90: 0xc0442e2  jal         func_110B88
label_10fd94:
    if (ctx->pc == 0x10FD94u) {
        ctx->pc = 0x10FD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FD90u;
        // 0x10fd94: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FD98u;
        goto label_10fd98;
    }
    ctx->pc = 0x10FD90u;
    SET_GPR_U32(ctx, 31, 0x10FD98u);
    ctx->pc = 0x10FD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FD90u;
    // 0x10fd94: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110B88u, 0x10FD90u, 0x10FD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FD98u;
label_10fd98:
    // 0x10fd98: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x10fd98u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_10fd9c:
    // 0x10fd9c: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x10fd9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_10fda0:
    // 0x10fda0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x10fda0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_10fda4:
    // 0x10fda4: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x10fda4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_10fda8:
    // 0x10fda8: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x10fda8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_10fdac:
    // 0x10fdac: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x10fdacu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_10fdb0:
    // 0x10fdb0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x10fdb0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_10fdb4:
    // 0x10fdb4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10fdb4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_10fdb8:
    // 0x10fdb8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10fdb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_10fdbc:
    // 0x10fdbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10fdbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10fdc0:
    // 0x10fdc0: 0x3e00008  jr          $ra
label_10fdc4:
    if (ctx->pc == 0x10FDC4u) {
        ctx->pc = 0x10FDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FDC0u;
        // 0x10fdc4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FDC8u;
        goto label_fallthrough_0x10fdc0;
    }
    ctx->pc = 0x10FDC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FDC0u;
        // 0x10fdc4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FDC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10fdc0:
    ctx->pc = 0x10FDC8u;
}
