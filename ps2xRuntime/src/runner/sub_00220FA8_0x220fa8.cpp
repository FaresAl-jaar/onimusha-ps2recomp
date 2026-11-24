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

// Function: sub_00220FA8
// Address: 0x220fa8 - 0x221048
void sub_00220FA8_0x220fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00220FA8_0x220fa8");
#endif

    switch (ctx->pc) {
        case 0x220fa8u: goto label_220fa8;
        case 0x220facu: goto label_220fac;
        case 0x220fb0u: goto label_220fb0;
        case 0x220fb4u: goto label_220fb4;
        case 0x220fb8u: goto label_220fb8;
        case 0x220fbcu: goto label_220fbc;
        case 0x220fc0u: goto label_220fc0;
        case 0x220fc4u: goto label_220fc4;
        case 0x220fc8u: goto label_220fc8;
        case 0x220fccu: goto label_220fcc;
        case 0x220fd0u: goto label_220fd0;
        case 0x220fd4u: goto label_220fd4;
        case 0x220fd8u: goto label_220fd8;
        case 0x220fdcu: goto label_220fdc;
        case 0x220fe0u: goto label_220fe0;
        case 0x220fe4u: goto label_220fe4;
        case 0x220fe8u: goto label_220fe8;
        case 0x220fecu: goto label_220fec;
        case 0x220ff0u: goto label_220ff0;
        case 0x220ff4u: goto label_220ff4;
        case 0x220ff8u: goto label_220ff8;
        case 0x220ffcu: goto label_220ffc;
        case 0x221000u: goto label_221000;
        case 0x221004u: goto label_221004;
        case 0x221008u: goto label_221008;
        case 0x22100cu: goto label_22100c;
        case 0x221010u: goto label_221010;
        case 0x221014u: goto label_221014;
        case 0x221018u: goto label_221018;
        case 0x22101cu: goto label_22101c;
        case 0x221020u: goto label_221020;
        case 0x221024u: goto label_221024;
        case 0x221028u: goto label_221028;
        case 0x22102cu: goto label_22102c;
        case 0x221030u: goto label_221030;
        case 0x221034u: goto label_221034;
        case 0x221038u: goto label_221038;
        case 0x22103cu: goto label_22103c;
        case 0x221040u: goto label_221040;
        case 0x221044u: goto label_221044;
        default: break;
    }

    ctx->pc = 0x220fa8u;

label_220fa8:
    // 0x220fa8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x220fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_220fac:
    // 0x220fac: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x220facu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_220fb0:
    // 0x220fb0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x220fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_220fb4:
    // 0x220fb4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x220fb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_220fb8:
    // 0x220fb8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x220fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_220fbc:
    // 0x220fbc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x220fbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_220fc0:
    // 0x220fc0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x220fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_220fc4:
    // 0x220fc4: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x220fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
label_220fc8:
    // 0x220fc8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x220fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_220fcc:
    // 0x220fcc: 0x34a50221  ori         $a1, $a1, 0x221
    ctx->pc = 0x220fccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)545);
label_220fd0:
    // 0x220fd0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x220fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_220fd4:
    // 0x220fd4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x220fd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_220fd8:
    // 0x220fd8: 0x8d070004  lw          $a3, 0x4($t0)
    ctx->pc = 0x220fd8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_220fdc:
    // 0x220fdc: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x220fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_220fe0:
    // 0x220fe0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x220fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_220fe4:
    // 0x220fe4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x220fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_220fe8:
    // 0x220fe8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x220fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_220fec:
    // 0x220fec: 0x3c010067  lui         $at, 0x67
    ctx->pc = 0x220fecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)103 << 16));
label_220ff0:
    // 0x220ff0: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x220ff0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_220ff4:
    // 0x220ff4: 0x8c228c70  lw          $v0, -0x7390($at)
    ctx->pc = 0x220ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294937712)));
label_220ff8:
    // 0x220ff8: 0x3c010067  lui         $at, 0x67
    ctx->pc = 0x220ff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)103 << 16));
label_220ffc:
    // 0x220ffc: 0x230821  addu        $at, $at, $v1
    ctx->pc = 0x220ffcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
label_221000:
    // 0x221000: 0x8c238c98  lw          $v1, -0x7368($at)
    ctx->pc = 0x221000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294937752)));
label_221004:
    // 0x221004: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_221008:
    if (ctx->pc == 0x221008u) {
        ctx->pc = 0x221008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221004u;
        // 0x221008: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22100Cu;
        goto label_22100c;
    }
    ctx->pc = 0x221004u;
    {
        const bool branch_taken_0x221004 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x221008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221004u;
        // 0x221008: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221004) {
            ctx->pc = 0x221028u;
            goto label_221028;
        }
    }
    ctx->pc = 0x22100Cu;
label_22100c:
    // 0x22100c: 0xc0848e0  jal         func_212380
label_221010:
    if (ctx->pc == 0x221010u) {
        ctx->pc = 0x221014u;
        goto label_221014;
    }
    ctx->pc = 0x22100Cu;
    SET_GPR_U32(ctx, 31, 0x221014u);
    ctx->pc = 0x212380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212380u, 0x22100Cu, 0x221014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221014u;
label_221014:
    // 0x221014: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x221014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_221018:
    // 0x221018: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x221018u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_22101c:
    // 0x22101c: 0x10000005  b           . + 4 + (0x5 << 2)
label_221020:
    if (ctx->pc == 0x221020u) {
        ctx->pc = 0x221020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22101Cu;
        // 0x221020: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221024u;
        goto label_221024;
    }
    ctx->pc = 0x22101Cu;
    {
        const bool branch_taken_0x22101c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22101Cu;
        // 0x221020: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22101c) {
            ctx->pc = 0x221034u;
            goto label_221034;
        }
    }
    ctx->pc = 0x221024u;
label_221024:
    // 0x221024: 0x0  nop
    ctx->pc = 0x221024u;
    // NOP
label_221028:
    // 0x221028: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x221028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22102c:
    // 0x22102c: 0x60f809  jalr        $v1
label_221030:
    if (ctx->pc == 0x221030u) {
        ctx->pc = 0x221030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22102Cu;
        // 0x221030: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221034u;
        goto label_221034;
    }
    ctx->pc = 0x22102Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x221034u);
        ctx->pc = 0x221030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22102Cu;
        // 0x221030: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22102Cu, 0x221034u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x221034u;
label_221034:
    // 0x221034: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x221034u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_221038:
    // 0x221038: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x221038u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_22103c:
    // 0x22103c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22103cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_221040:
    // 0x221040: 0x3e00008  jr          $ra
label_221044:
    if (ctx->pc == 0x221044u) {
        ctx->pc = 0x221044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221040u;
        // 0x221044: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221048u;
        goto label_fallthrough_0x221040;
    }
    ctx->pc = 0x221040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221040u;
        // 0x221044: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221040u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x221040:
    ctx->pc = 0x221048u;
}
