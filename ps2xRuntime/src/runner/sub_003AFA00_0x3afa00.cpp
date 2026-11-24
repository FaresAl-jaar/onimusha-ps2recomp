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

// Function: sub_003AFA00
// Address: 0x3afa00 - 0x3afee0
void sub_003AFA00_0x3afa00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AFA00_0x3afa00");
#endif

    switch (ctx->pc) {
        case 0x3afa68u: goto label_3afa68;
        case 0x3afaa0u: goto label_3afaa0;
        case 0x3afab0u: goto label_3afab0;
        case 0x3afaf0u: goto label_3afaf0;
        case 0x3afb60u: goto label_3afb60;
        case 0x3afc24u: goto label_3afc24;
        case 0x3afc54u: goto label_3afc54;
        case 0x3afc80u: goto label_3afc80;
        case 0x3afca4u: goto label_3afca4;
        case 0x3afcb4u: goto label_3afcb4;
        case 0x3afcc4u: goto label_3afcc4;
        case 0x3afd20u: goto label_3afd20;
        case 0x3afd48u: goto label_3afd48;
        case 0x3afd60u: goto label_3afd60;
        case 0x3afd6cu: goto label_3afd6c;
        case 0x3afe28u: goto label_3afe28;
        case 0x3afed0u: goto label_3afed0;
        default: break;
    }

    ctx->pc = 0x3afa00u;

    // 0x3afa00: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3afa00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x3afa04: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3afa04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3afa08: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3afa08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3afa0c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3afa0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3afa10: 0x90860521  lbu         $a2, 0x521($a0)
    ctx->pc = 0x3afa10u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1313)));
    // 0x3afa14: 0x10c3008c  beq         $a2, $v1, . + 4 + (0x8C << 2)
    ctx->pc = 0x3AFA14u;
    {
        const bool branch_taken_0x3afa14 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x3AFA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFA14u;
        // 0x3afa18: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3afa14) {
            ctx->pc = 0x3AFC48u;
            goto label_3afc48;
        }
    }
    ctx->pc = 0x3AFA1Cu;
    // 0x3afa1c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3afa1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3afa20: 0x10c3007b  beq         $a2, $v1, . + 4 + (0x7B << 2)
    ctx->pc = 0x3AFA20u;
    {
        const bool branch_taken_0x3afa20 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x3AFA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFA20u;
        // 0x3afa24: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3afa20) {
            ctx->pc = 0x3AFC10u;
            goto label_3afc10;
        }
    }
    ctx->pc = 0x3AFA28u;
    // 0x3afa28: 0x10c3002d  beq         $a2, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x3AFA28u;
    {
        const bool branch_taken_0x3afa28 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x3afa28) {
            ctx->pc = 0x3AFAE0u;
            goto label_3afae0;
        }
    }
    ctx->pc = 0x3AFA30u;
    // 0x3afa30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3afa30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3afa34: 0x10c30022  beq         $a2, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x3AFA34u;
    {
        const bool branch_taken_0x3afa34 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x3afa34) {
            ctx->pc = 0x3AFAC0u;
            goto label_3afac0;
        }
    }
    ctx->pc = 0x3AFA3Cu;
    // 0x3afa3c: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AFA3Cu;
    {
        const bool branch_taken_0x3afa3c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3afa3c) {
            ctx->pc = 0x3AFA50u;
            goto label_3afa50;
        }
    }
    ctx->pc = 0x3AFA44u;
    // 0x3afa44: 0x10000122  b           . + 4 + (0x122 << 2)
    ctx->pc = 0x3AFA44u;
    {
        const bool branch_taken_0x3afa44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3afa44) {
            ctx->pc = 0x3AFED0u;
            goto label_3afed0;
        }
    }
    ctx->pc = 0x3AFA4Cu;
    // 0x3afa4c: 0x0  nop
    ctx->pc = 0x3afa4cu;
    // NOP
label_3afa50:
    // 0x3afa50: 0x10a00015  beqz        $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x3AFA50u;
    {
        const bool branch_taken_0x3afa50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3afa50) {
            ctx->pc = 0x3AFAA8u;
            goto label_3afaa8;
        }
    }
    ctx->pc = 0x3AFA58u;
    // 0x3afa58: 0x9204053b  lbu         $a0, 0x53B($s0)
    ctx->pc = 0x3afa58u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
    // 0x3afa5c: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x3afa5cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x3afa60: 0xc0aa3fc  jal         func_2A8FF0
    ctx->pc = 0x3AFA60u;
    SET_GPR_U32(ctx, 31, 0x3AFA68u);
    ctx->pc = 0x3AFA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AFA60u;
    // 0x3afa64: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8FF0u, 0x3AFA60u, 0x3AFA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AFA68u;
label_3afa68:
    // 0x3afa68: 0xae020550  sw          $v0, 0x550($s0)
    ctx->pc = 0x3afa68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 2));
    // 0x3afa6c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3afa6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3afa70: 0x9203052e  lbu         $v1, 0x52E($s0)
    ctx->pc = 0x3afa70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x3afa74: 0x3c022200  lui         $v0, 0x2200
    ctx->pc = 0x3afa74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8704 << 16));
    // 0x3afa78: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3afa78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3afa7c: 0x34455702  ori         $a1, $v0, 0x5702
    ctx->pc = 0x3afa7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22274);
    // 0x3afa80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3afa80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3afa84: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x3afa84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3afa88: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3afa88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3afa8c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3afa8cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3afa90: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3afa90u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3afa94: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3afa94u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3afa98: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3AFA98u;
    SET_GPR_U32(ctx, 31, 0x3AFAA0u);
    ctx->pc = 0x3AFA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AFA98u;
    // 0x3afa9c: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3AFA98u, 0x3AFAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AFAA0u;
label_3afaa0:
    // 0x3afaa0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3AFAA0u;
    {
        const bool branch_taken_0x3afaa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3afaa0) {
            ctx->pc = 0x3AFAB0u;
            goto label_3afab0;
        }
    }
    ctx->pc = 0x3AFAA8u;
label_3afaa8:
    // 0x3afaa8: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3AFAA8u;
    SET_GPR_U32(ctx, 31, 0x3AFAB0u);
    ctx->pc = 0x3AFAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AFAA8u;
    // 0x3afaac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3AFAA8u, 0x3AFAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AFAB0u;
label_3afab0:
    // 0x3afab0: 0x92030521  lbu         $v1, 0x521($s0)
    ctx->pc = 0x3afab0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x3afab4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3afab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3afab8: 0x10000105  b           . + 4 + (0x105 << 2)
    ctx->pc = 0x3AFAB8u;
    {
        const bool branch_taken_0x3afab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AFABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFAB8u;
        // 0x3afabc: 0xa2030521  sb          $v1, 0x521($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3afab8) {
            ctx->pc = 0x3AFED0u;
            goto label_3afed0;
        }
    }
    ctx->pc = 0x3AFAC0u;
label_3afac0:
    // 0x3afac0: 0x86020526  lh          $v0, 0x526($s0)
    ctx->pc = 0x3afac0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1318)));
    // 0x3afac4: 0xa6020512  sh          $v0, 0x512($s0)
    ctx->pc = 0x3afac4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x3afac8: 0xa6000510  sh          $zero, 0x510($s0)
    ctx->pc = 0x3afac8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x3afacc: 0xa2000514  sb          $zero, 0x514($s0)
    ctx->pc = 0x3afaccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x3afad0: 0xa2000515  sb          $zero, 0x515($s0)
    ctx->pc = 0x3afad0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x3afad4: 0x92020521  lbu         $v0, 0x521($s0)
    ctx->pc = 0x3afad4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x3afad8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3afad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3afadc: 0xa2020521  sb          $v0, 0x521($s0)
    ctx->pc = 0x3afadcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 2));
label_3afae0:
    // 0x3afae0: 0x8e060550  lw          $a2, 0x550($s0)
    ctx->pc = 0x3afae0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
    // 0x3afae4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3afae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3afae8: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x3AFAE8u;
    SET_GPR_U32(ctx, 31, 0x3AFAF0u);
    ctx->pc = 0x3AFAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AFAE8u;
    // 0x3afaec: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x3AFAE8u, 0x3AFAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AFAF0u;
label_3afaf0:
    // 0x3afaf0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3AFAF0u;
    {
        const bool branch_taken_0x3afaf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3afaf0) {
            ctx->pc = 0x3AFB08u;
            goto label_3afb08;
        }
    }
    ctx->pc = 0x3AFAF8u;
    // 0x3afaf8: 0x92030521  lbu         $v1, 0x521($s0)
    ctx->pc = 0x3afaf8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x3afafc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3afafcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3afb00: 0x100000f3  b           . + 4 + (0xF3 << 2)
    ctx->pc = 0x3AFB00u;
    {
        const bool branch_taken_0x3afb00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AFB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFB00u;
        // 0x3afb04: 0xa2030521  sb          $v1, 0x521($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3afb00) {
            ctx->pc = 0x3AFED0u;
            goto label_3afed0;
        }
    }
    ctx->pc = 0x3AFB08u;
label_3afb08:
    // 0x3afb08: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3afb08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3afb0c: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x3afb0cu;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x3afb10: 0x27aa0080  addiu       $t2, $sp, 0x80
    ctx->pc = 0x3afb10u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3afb14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3afb14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3afb18: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x3afb18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3afb1c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3afb1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3afb20: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3afb20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3afb24: 0x7fa90050  sq          $t1, 0x50($sp)
    ctx->pc = 0x3afb24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 9));
    // 0x3afb28: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x3afb28u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C30u));
    // 0x3afb2c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3afb2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3afb30: 0x7fa60060  sq          $a2, 0x60($sp)
    ctx->pc = 0x3afb30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 6));
    // 0x3afb34: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x3afb34u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x3afb38: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3afb38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3afb3c: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x3afb3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
    // 0x3afb40: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x3afb40u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x3afb44: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3afb44u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x3afb48: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x3afb48u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3afb4c: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3afb4cu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x3afb50: 0x92060558  lbu         $a2, 0x558($s0)
    ctx->pc = 0x3afb50u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1368)));
    // 0x3afb54: 0xc60c0554  lwc1        $f12, 0x554($s0)
    ctx->pc = 0x3afb54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3afb58: 0xc0c0900  jal         func_302400
    ctx->pc = 0x3AFB58u;
    SET_GPR_U32(ctx, 31, 0x3AFB60u);
    ctx->pc = 0x3AFB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AFB58u;
    // 0x3afb5c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x3AFB58u, 0x3AFB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AFB60u;
label_3afb60:
    // 0x3afb60: 0x92030515  lbu         $v1, 0x515($s0)
    ctx->pc = 0x3afb60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1301)));
    // 0x3afb64: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AFB64u;
    {
        const bool branch_taken_0x3afb64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AFB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFB64u;
        // 0x3afb68: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3afb64) {
            ctx->pc = 0x3AFB78u;
            goto label_3afb78;
        }
    }
    ctx->pc = 0x3AFB6Cu;
    // 0x3afb6c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3AFB6Cu;
    {
        const bool branch_taken_0x3afb6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3afb6c) {
            ctx->pc = 0x3AFBF8u;
            goto label_3afbf8;
        }
    }
    ctx->pc = 0x3AFB74u;
    // 0x3afb74: 0x0  nop
    ctx->pc = 0x3afb74u;
    // NOP
label_3afb78:
    // 0x3afb78: 0x86040510  lh          $a0, 0x510($s0)
    ctx->pc = 0x3afb78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3afb7c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3afb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3afb80: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3afb80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3afb84: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x3afb84u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3afb88: 0x86040512  lh          $a0, 0x512($s0)
    ctx->pc = 0x3afb88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1298)));
    // 0x3afb8c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3AFB8Cu;
    {
        const bool branch_taken_0x3afb8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3afb8c) {
            ctx->pc = 0x3AFBC8u;
            goto label_3afbc8;
        }
    }
    ctx->pc = 0x3AFB94u;
    // 0x3afb94: 0x86050510  lh          $a1, 0x510($s0)
    ctx->pc = 0x3afb94u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3afb98: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x3afb98u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x3afb9c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3AFB9Cu;
    {
        const bool branch_taken_0x3afb9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AFBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFB9Cu;
        // 0x3afba0: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3afb9c) {
            ctx->pc = 0x3AFBF0u;
            goto label_3afbf0;
        }
    }
    ctx->pc = 0x3AFBA4u;
    // 0x3afba4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3afba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3afba8: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3afba8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3afbac: 0x0  nop
    ctx->pc = 0x3afbacu;
    // NOP
    // 0x3afbb0: 0x0  nop
    ctx->pc = 0x3afbb0u;
    // NOP
    // 0x3afbb4: 0x2010  mfhi        $a0
    ctx->pc = 0x3afbb4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3afbb8: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x3afbb8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3afbbc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3AFBBCu;
    {
        const bool branch_taken_0x3afbbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AFBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFBBCu;
        // 0x3afbc0: 0xa2030514  sb          $v1, 0x514($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3afbbc) {
            ctx->pc = 0x3AFBF0u;
            goto label_3afbf0;
        }
    }
    ctx->pc = 0x3AFBC4u;
    // 0x3afbc4: 0x0  nop
    ctx->pc = 0x3afbc4u;
    // NOP
label_3afbc8:
    // 0x3afbc8: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x3afbc8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3afbcc: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3afbccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3afbd0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3AFBD0u;
    {
        const bool branch_taken_0x3afbd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3afbd0) {
            ctx->pc = 0x3AFBF0u;
            goto label_3afbf0;
        }
    }
    ctx->pc = 0x3AFBD8u;
    // 0x3afbd8: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x3afbd8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3afbdc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3afbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3afbe0: 0xa2030515  sb          $v1, 0x515($s0)
    ctx->pc = 0x3afbe0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x3afbe4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3AFBE4u;
    {
        const bool branch_taken_0x3afbe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AFBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFBE4u;
        // 0x3afbe8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3afbe4) {
            ctx->pc = 0x3AFBF8u;
            goto label_3afbf8;
        }
    }
    ctx->pc = 0x3AFBECu;
    // 0x3afbec: 0x0  nop
    ctx->pc = 0x3afbecu;
    // NOP
label_3afbf0:
    // 0x3afbf0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3afbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3afbf4: 0x0  nop
    ctx->pc = 0x3afbf4u;
    // NOP
label_3afbf8:
    // 0x3afbf8: 0x146000b5  bnez        $v1, . + 4 + (0xB5 << 2)
    ctx->pc = 0x3AFBF8u;
    {
        const bool branch_taken_0x3afbf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3afbf8) {
            ctx->pc = 0x3AFED0u;
            goto label_3afed0;
        }
    }
    ctx->pc = 0x3AFC00u;
    // 0x3afc00: 0x92030521  lbu         $v1, 0x521($s0)
    ctx->pc = 0x3afc00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x3afc04: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3afc04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3afc08: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x3AFC08u;
    {
        const bool branch_taken_0x3afc08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AFC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFC08u;
        // 0x3afc0c: 0xa2030521  sb          $v1, 0x521($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3afc08) {
            ctx->pc = 0x3AFED0u;
            goto label_3afed0;
        }
    }
    ctx->pc = 0x3AFC10u;
label_3afc10:
    // 0x3afc10: 0xae000550  sw          $zero, 0x550($s0)
    ctx->pc = 0x3afc10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 0));
    // 0x3afc14: 0x9204053b  lbu         $a0, 0x53B($s0)
    ctx->pc = 0x3afc14u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
    // 0x3afc18: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x3afc18u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x3afc1c: 0xc0aa3cc  jal         func_2A8F30
    ctx->pc = 0x3AFC1Cu;
    SET_GPR_U32(ctx, 31, 0x3AFC24u);
    ctx->pc = 0x3AFC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AFC1Cu;
    // 0x3afc20: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8F30u, 0x3AFC1Cu, 0x3AFC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AFC24u;
label_3afc24:
    // 0x3afc24: 0xae020550  sw          $v0, 0x550($s0)
    ctx->pc = 0x3afc24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 2));
    // 0x3afc28: 0x86020528  lh          $v0, 0x528($s0)
    ctx->pc = 0x3afc28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1320)));
    // 0x3afc2c: 0xa6020512  sh          $v0, 0x512($s0)
    ctx->pc = 0x3afc2cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x3afc30: 0xa6000510  sh          $zero, 0x510($s0)
    ctx->pc = 0x3afc30u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x3afc34: 0xa2000514  sb          $zero, 0x514($s0)
    ctx->pc = 0x3afc34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x3afc38: 0xa2000515  sb          $zero, 0x515($s0)
    ctx->pc = 0x3afc38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x3afc3c: 0x92020521  lbu         $v0, 0x521($s0)
    ctx->pc = 0x3afc3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x3afc40: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3afc40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3afc44: 0xa2020521  sb          $v0, 0x521($s0)
    ctx->pc = 0x3afc44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 2));
label_3afc48:
    // 0x3afc48: 0x860500c2  lh          $a1, 0xC2($s0)
    ctx->pc = 0x3afc48u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x3afc4c: 0xc096e34  jal         func_25B8D0
    ctx->pc = 0x3AFC4Cu;
    SET_GPR_U32(ctx, 31, 0x3AFC54u);
    ctx->pc = 0x3AFC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AFC4Cu;
    // 0x3afc50: 0x26040090  addiu       $a0, $s0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B8D0u, 0x3AFC4Cu, 0x3AFC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AFC54u;
label_3afc54:
    // 0x3afc54: 0x92060559  lbu         $a2, 0x559($s0)
    ctx->pc = 0x3afc54u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1369)));
    // 0x3afc58: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3afc58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3afc5c: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x3afc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x3afc60: 0x24422a54  addiu       $v0, $v0, 0x2A54
    ctx->pc = 0x3afc60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10836));
    // 0x3afc64: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x3afc64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x3afc68: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x3afc68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x3afc6c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3afc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3afc70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3afc70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3afc74: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x3afc74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3afc78: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x3AFC78u;
    SET_GPR_U32(ctx, 31, 0x3AFC80u);
    ctx->pc = 0x3AFC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AFC78u;
    // 0x3afc7c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x3AFC78u, 0x3AFC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AFC80u;
label_3afc80:
    // 0x3afc80: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3afc80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3afc84: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3afc84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3afc88: 0x34638885  ori         $v1, $v1, 0x8885
    ctx->pc = 0x3afc88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34949);
    // 0x3afc8c: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x3afc8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3afc90: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x3afc90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3afc94: 0x26050090  addiu       $a1, $s0, 0x90
    ctx->pc = 0x3afc94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x3afc98: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3afc98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3afc9c: 0xc07681c  jal         func_1DA070
    ctx->pc = 0x3AFC9Cu;
    SET_GPR_U32(ctx, 31, 0x3AFCA4u);
    ctx->pc = 0x3AFCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AFC9Cu;
    // 0x3afca0: 0x260600a0  addiu       $a2, $s0, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA070u, 0x3AFC9Cu, 0x3AFCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AFCA4u;
label_3afca4:
    // 0x3afca4: 0x8e060550  lw          $a2, 0x550($s0)
    ctx->pc = 0x3afca4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
    // 0x3afca8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3afca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3afcac: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x3AFCACu;
    SET_GPR_U32(ctx, 31, 0x3AFCB4u);
    ctx->pc = 0x3AFCB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AFCACu;
    // 0x3afcb0: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x3AFCACu, 0x3AFCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AFCB4u;
label_3afcb4:
    // 0x3afcb4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AFCB4u;
    {
        const bool branch_taken_0x3afcb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AFCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFCB4u;
        // 0x3afcb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3afcb4) {
            ctx->pc = 0x3AFCC8u;
            goto label_3afcc8;
        }
    }
    ctx->pc = 0x3AFCBCu;
    // 0x3afcbc: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3AFCBCu;
    SET_GPR_U32(ctx, 31, 0x3AFCC4u);
    ctx->pc = 0x3AFCC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AFCBCu;
    // 0x3afcc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3AFCBCu, 0x3AFCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AFCC4u;
label_3afcc4:
    // 0x3afcc4: 0x0  nop
    ctx->pc = 0x3afcc4u;
    // NOP
label_3afcc8:
    // 0x3afcc8: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3afcc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3afccc: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x3afcccu;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x3afcd0: 0x27aa0080  addiu       $t2, $sp, 0x80
    ctx->pc = 0x3afcd0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3afcd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3afcd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3afcd8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x3afcd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3afcdc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3afcdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3afce0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3afce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3afce4: 0x7fa90050  sq          $t1, 0x50($sp)
    ctx->pc = 0x3afce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 9));
    // 0x3afce8: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x3afce8u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C30u));
    // 0x3afcec: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3afcecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3afcf0: 0x7fa60060  sq          $a2, 0x60($sp)
    ctx->pc = 0x3afcf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 6));
    // 0x3afcf4: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x3afcf4u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x3afcf8: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3afcf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3afcfc: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x3afcfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
    // 0x3afd00: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x3afd00u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x3afd04: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3afd04u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x3afd08: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x3afd08u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3afd0c: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3afd0cu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x3afd10: 0x92060558  lbu         $a2, 0x558($s0)
    ctx->pc = 0x3afd10u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1368)));
    // 0x3afd14: 0xc60c0554  lwc1        $f12, 0x554($s0)
    ctx->pc = 0x3afd14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3afd18: 0xc0c0900  jal         func_302400
    ctx->pc = 0x3AFD18u;
    SET_GPR_U32(ctx, 31, 0x3AFD20u);
    ctx->pc = 0x3AFD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AFD18u;
    // 0x3afd1c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x3AFD18u, 0x3AFD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AFD20u;
label_3afd20:
    // 0x3afd20: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3afd20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3afd24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3afd24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3afd28: 0xafa2009c  sw          $v0, 0x9C($sp)
    ctx->pc = 0x3afd28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
    // 0x3afd2c: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x3afd2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3afd30: 0x26060080  addiu       $a2, $s0, 0x80
    ctx->pc = 0x3afd30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x3afd34: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x3afd34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3afd38: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x3afd38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3afd3c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x3afd3cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3afd40: 0xc0c0980  jal         func_302600
    ctx->pc = 0x3AFD40u;
    SET_GPR_U32(ctx, 31, 0x3AFD48u);
    ctx->pc = 0x3AFD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AFD40u;
    // 0x3afd44: 0x27aa009c  addiu       $t2, $sp, 0x9C (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302600u, 0x3AFD40u, 0x3AFD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AFD48u;
label_3afd48:
    // 0x3afd48: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3AFD48u;
    {
        const bool branch_taken_0x3afd48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3afd48) {
            ctx->pc = 0x3AFD70u;
            goto label_3afd70;
        }
    }
    ctx->pc = 0x3AFD50u;
    // 0x3afd50: 0x8e060550  lw          $a2, 0x550($s0)
    ctx->pc = 0x3afd50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
    // 0x3afd54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3afd54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3afd58: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x3AFD58u;
    SET_GPR_U32(ctx, 31, 0x3AFD60u);
    ctx->pc = 0x3AFD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AFD58u;
    // 0x3afd5c: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x3AFD58u, 0x3AFD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AFD60u;
label_3afd60:
    // 0x3afd60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3afd60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3afd64: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3AFD64u;
    SET_GPR_U32(ctx, 31, 0x3AFD6Cu);
    ctx->pc = 0x3AFD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AFD64u;
    // 0x3afd68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3AFD64u, 0x3AFD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AFD6Cu;
label_3afd6c:
    // 0x3afd6c: 0x0  nop
    ctx->pc = 0x3afd6cu;
    // NOP
label_3afd70:
    // 0x3afd70: 0x8603055a  lh          $v1, 0x55A($s0)
    ctx->pc = 0x3afd70u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1370)));
    // 0x3afd74: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3afd74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3afd78: 0xa603055a  sh          $v1, 0x55A($s0)
    ctx->pc = 0x3afd78u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1370), (uint16_t)GPR_U32(ctx, 3));
    // 0x3afd7c: 0x8603055a  lh          $v1, 0x55A($s0)
    ctx->pc = 0x3afd7cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1370)));
    // 0x3afd80: 0x1c600029  bgtz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x3AFD80u;
    {
        const bool branch_taken_0x3afd80 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x3afd80) {
            ctx->pc = 0x3AFE28u;
            goto label_3afe28;
        }
    }
    ctx->pc = 0x3AFD88u;
    // 0x3afd88: 0x860300c2  lh          $v1, 0xC2($s0)
    ctx->pc = 0x3afd88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x3afd8c: 0x8602055c  lh          $v0, 0x55C($s0)
    ctx->pc = 0x3afd8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1372)));
    // 0x3afd90: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3afd90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3afd94: 0xa60200c2  sh          $v0, 0xC2($s0)
    ctx->pc = 0x3afd94u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
    // 0x3afd98: 0x860200c2  lh          $v0, 0xC2($s0)
    ctx->pc = 0x3afd98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x3afd9c: 0x28410801  slti        $at, $v0, 0x801
    ctx->pc = 0x3afd9cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2049) ? 1 : 0);
    // 0x3afda0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AFDA0u;
    {
        const bool branch_taken_0x3afda0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AFDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFDA0u;
        // 0x3afda4: 0x2841f800  slti        $at, $v0, -0x800 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294965248) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3afda0) {
            ctx->pc = 0x3AFDB0u;
            goto label_3afdb0;
        }
    }
    ctx->pc = 0x3AFDA8u;
    // 0x3afda8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3AFDA8u;
    {
        const bool branch_taken_0x3afda8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AFDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFDA8u;
        // 0x3afdac: 0x2442f000  addiu       $v0, $v0, -0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3afda8) {
            ctx->pc = 0x3AFDC0u;
            goto label_3afdc0;
        }
    }
    ctx->pc = 0x3AFDB0u;
label_3afdb0:
    // 0x3afdb0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AFDB0u;
    {
        const bool branch_taken_0x3afdb0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3afdb0) {
            ctx->pc = 0x3AFDC0u;
            goto label_3afdc0;
        }
    }
    ctx->pc = 0x3AFDB8u;
    // 0x3afdb8: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x3AFDB8u;
    {
        const bool branch_taken_0x3afdb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AFDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFDB8u;
        // 0x3afdbc: 0x24421000  addiu       $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3afdb8) {
            ctx->pc = 0x3AFDC0u;
            goto label_3afdc0;
        }
    }
    ctx->pc = 0x3AFDC0u;
label_3afdc0:
    // 0x3afdc0: 0xa60200c2  sh          $v0, 0xC2($s0)
    ctx->pc = 0x3afdc0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
    // 0x3afdc4: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3afdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3afdc8: 0x860c055c  lh          $t4, 0x55C($s0)
    ctx->pc = 0x3afdc8u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1372)));
    // 0x3afdcc: 0x3c022200  lui         $v0, 0x2200
    ctx->pc = 0x3afdccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8704 << 16));
    // 0x3afdd0: 0x34455702  ori         $a1, $v0, 0x5702
    ctx->pc = 0x3afdd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22274);
    // 0x3afdd4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3afdd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3afdd8: 0x24632a5a  addiu       $v1, $v1, 0x2A5A
    ctx->pc = 0x3afdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10842));
    // 0x3afddc: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3afddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3afde0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3afde0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3afde4: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x3afde4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3afde8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3afde8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3afdec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3afdecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3afdf0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3afdf0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3afdf4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3afdf4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3afdf8: 0xc1023  negu        $v0, $t4
    ctx->pc = 0x3afdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 12)));
    // 0x3afdfc: 0xa602055c  sh          $v0, 0x55C($s0)
    ctx->pc = 0x3afdfcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1372), (uint16_t)GPR_U32(ctx, 2));
    // 0x3afe00: 0x920c0559  lbu         $t4, 0x559($s0)
    ctx->pc = 0x3afe00u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1369)));
    // 0x3afe04: 0xc1040  sll         $v0, $t4, 1
    ctx->pc = 0x3afe04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x3afe08: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x3afe08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x3afe0c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3afe0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3afe10: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3afe10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3afe14: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x3afe14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3afe18: 0xa602055a  sh          $v0, 0x55A($s0)
    ctx->pc = 0x3afe18u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1370), (uint16_t)GPR_U32(ctx, 2));
    // 0x3afe1c: 0x9202052e  lbu         $v0, 0x52E($s0)
    ctx->pc = 0x3afe1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x3afe20: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3AFE20u;
    SET_GPR_U32(ctx, 31, 0x3AFE28u);
    ctx->pc = 0x3AFE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AFE20u;
    // 0x3afe24: 0xffa20000  sd          $v0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3AFE20u, 0x3AFE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AFE28u;
label_3afe28:
    // 0x3afe28: 0x92030515  lbu         $v1, 0x515($s0)
    ctx->pc = 0x3afe28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1301)));
    // 0x3afe2c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AFE2Cu;
    {
        const bool branch_taken_0x3afe2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AFE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFE2Cu;
        // 0x3afe30: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3afe2c) {
            ctx->pc = 0x3AFE40u;
            goto label_3afe40;
        }
    }
    ctx->pc = 0x3AFE34u;
    // 0x3afe34: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3AFE34u;
    {
        const bool branch_taken_0x3afe34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3afe34) {
            ctx->pc = 0x3AFEC0u;
            goto label_3afec0;
        }
    }
    ctx->pc = 0x3AFE3Cu;
    // 0x3afe3c: 0x0  nop
    ctx->pc = 0x3afe3cu;
    // NOP
label_3afe40:
    // 0x3afe40: 0x86040510  lh          $a0, 0x510($s0)
    ctx->pc = 0x3afe40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3afe44: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3afe44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3afe48: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3afe48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3afe4c: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x3afe4cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3afe50: 0x86040512  lh          $a0, 0x512($s0)
    ctx->pc = 0x3afe50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1298)));
    // 0x3afe54: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3AFE54u;
    {
        const bool branch_taken_0x3afe54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3afe54) {
            ctx->pc = 0x3AFE90u;
            goto label_3afe90;
        }
    }
    ctx->pc = 0x3AFE5Cu;
    // 0x3afe5c: 0x86050510  lh          $a1, 0x510($s0)
    ctx->pc = 0x3afe5cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3afe60: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x3afe60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x3afe64: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3AFE64u;
    {
        const bool branch_taken_0x3afe64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AFE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFE64u;
        // 0x3afe68: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3afe64) {
            ctx->pc = 0x3AFEB8u;
            goto label_3afeb8;
        }
    }
    ctx->pc = 0x3AFE6Cu;
    // 0x3afe6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3afe6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3afe70: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3afe70u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3afe74: 0x0  nop
    ctx->pc = 0x3afe74u;
    // NOP
    // 0x3afe78: 0x0  nop
    ctx->pc = 0x3afe78u;
    // NOP
    // 0x3afe7c: 0x2010  mfhi        $a0
    ctx->pc = 0x3afe7cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3afe80: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x3afe80u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3afe84: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3AFE84u;
    {
        const bool branch_taken_0x3afe84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AFE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFE84u;
        // 0x3afe88: 0xa2030514  sb          $v1, 0x514($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3afe84) {
            ctx->pc = 0x3AFEB8u;
            goto label_3afeb8;
        }
    }
    ctx->pc = 0x3AFE8Cu;
    // 0x3afe8c: 0x0  nop
    ctx->pc = 0x3afe8cu;
    // NOP
label_3afe90:
    // 0x3afe90: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x3afe90u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3afe94: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3afe94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3afe98: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3AFE98u;
    {
        const bool branch_taken_0x3afe98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3afe98) {
            ctx->pc = 0x3AFEB8u;
            goto label_3afeb8;
        }
    }
    ctx->pc = 0x3AFEA0u;
    // 0x3afea0: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x3afea0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3afea4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3afea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3afea8: 0xa2030515  sb          $v1, 0x515($s0)
    ctx->pc = 0x3afea8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x3afeac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3AFEACu;
    {
        const bool branch_taken_0x3afeac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AFEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFEACu;
        // 0x3afeb0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3afeac) {
            ctx->pc = 0x3AFEC0u;
            goto label_3afec0;
        }
    }
    ctx->pc = 0x3AFEB4u;
    // 0x3afeb4: 0x0  nop
    ctx->pc = 0x3afeb4u;
    // NOP
label_3afeb8:
    // 0x3afeb8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3afeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3afebc: 0x0  nop
    ctx->pc = 0x3afebcu;
    // NOP
label_3afec0:
    // 0x3afec0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AFEC0u;
    {
        const bool branch_taken_0x3afec0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AFEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFEC0u;
        // 0x3afec4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3afec0) {
            ctx->pc = 0x3AFED0u;
            goto label_3afed0;
        }
    }
    ctx->pc = 0x3AFEC8u;
    // 0x3afec8: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3AFEC8u;
    SET_GPR_U32(ctx, 31, 0x3AFED0u);
    ctx->pc = 0x3AFECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AFEC8u;
    // 0x3afecc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3AFEC8u, 0x3AFED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AFED0u;
label_3afed0:
    // 0x3afed0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3afed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3afed4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3afed4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3afed8: 0x3e00008  jr          $ra
    ctx->pc = 0x3AFED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AFEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFED8u;
        // 0x3afedc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AFED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AFEE0u;
}
