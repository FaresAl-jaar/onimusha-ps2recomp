#include <cstdio>
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

// Function: sub_00152A40
// Address: 0x152a40 - 0x152f70
void sub_00152A40_0x152a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00152A40_0x152a40");
#endif

    switch (ctx->pc) {
        case 0x152a50u: goto label_152a50;
        case 0x152a58u: goto label_152a58;
        case 0x152a70u: goto label_152a70;
        case 0x152a80u: goto label_152a80;
        case 0x152a88u: goto label_152a88;
        case 0x152a94u: goto label_152a94;
        case 0x152a9cu: goto label_152a9c;
        case 0x152aa0u: goto label_152aa0;
        case 0x152aacu: goto label_152aac;
        case 0x152ac0u: goto label_152ac0;
        case 0x152ad0u: goto label_152ad0;
        case 0x152adcu: goto label_152adc;
        case 0x152ae4u: goto label_152ae4;
        case 0x152af0u: goto label_152af0;
        case 0x152c40u: goto label_152c40;
        case 0x152c78u: goto label_152c78;
        case 0x152cb0u: goto label_152cb0;
        case 0x152ce8u: goto label_152ce8;
        case 0x152d20u: goto label_152d20;
        case 0x152d58u: goto label_152d58;
        case 0x152d90u: goto label_152d90;
        case 0x152dc8u: goto label_152dc8;
        case 0x152dd8u: goto label_152dd8;
        case 0x152df4u: goto label_152df4;
        case 0x152e24u: goto label_152e24;
        case 0x152e38u: goto label_152e38;
        case 0x152e54u: goto label_152e54;
        case 0x152e84u: goto label_152e84;
        case 0x152e9cu: goto label_152e9c;
        case 0x152ed0u: goto label_152ed0;
        case 0x152f44u: goto label_152f44;
        case 0x152f4cu: goto label_152f4c;
        case 0x152f68u: goto label_152f68;
        default: break;
    }

    ctx->pc = 0x152a40u;

    // 0x152a40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x152a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x152a44: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x152a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x152a48: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x152a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x152a4c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x152a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_152a50:
    // 0x152a50: 0xc043808  jal         func_10E020
    ctx->pc = 0x152A50u;
    SET_GPR_U32(ctx, 31, 0x152A58u);
    ctx->pc = 0x152A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152A50u;
    // 0x152a54: 0x8f848588  lw          $a0, -0x7A78($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935944)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E020u, 0x152A50u, 0x152A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152A58u;
label_152a58:
    { static uint32_t n=0; ++n; if (n<=5||(n%100)==0) fprintf(stderr,"[t3 after_wait_B] n=%u v0=0x%x\n",n,GPR_U32(ctx,2)); }
    // 0x152a58: 0x83838574  lb          $v1, -0x7A8C($gp)
    ctx->pc = 0x152a58u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935924)));
    // 0x152a5c: 0x83828578  lb          $v0, -0x7A88($gp)
    ctx->pc = 0x152a5cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935928)));
    // 0x152a60: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x152A60u;
    {
        const bool branch_taken_0x152a60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x152a60) {
            ctx->pc = 0x152A78u;
            goto label_152a78;
        }
    }
    ctx->pc = 0x152A68u;
    // 0x152a68: 0xc043800  jal         func_10E000
    ctx->pc = 0x152A68u;
    SET_GPR_U32(ctx, 31, 0x152A70u);
    ctx->pc = 0x152A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152A68u;
    // 0x152a6c: 0x8f84858c  lw          $a0, -0x7A74($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935948)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E000u, 0x152A68u, 0x152A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152A70u;
label_152a70:
    // 0x152a70: 0x1000fff7  b           . + 4 + (-0x9 << 2)
    ctx->pc = 0x152A70u;
    {
        const bool branch_taken_0x152a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152a70) {
            ctx->pc = 0x152A50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_152a50;
        }
    }
    ctx->pc = 0x152A78u;
label_152a78:
    // 0x152a78: 0xc0437dc  jal         func_10DF70
    ctx->pc = 0x152A78u;
    SET_GPR_U32(ctx, 31, 0x152A80u);
    ctx->pc = 0x152A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152A78u;
    // 0x152a7c: 0x8f848590  lw          $a0, -0x7A70($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DF70u, 0x152A78u, 0x152A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152A80u;
label_152a80:
    // 0x152a80: 0x10000133  b           . + 4 + (0x133 << 2)
    ctx->pc = 0x152A80u;
    {
        const bool branch_taken_0x152a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152a80) {
            ctx->pc = 0x152F50u;
            goto label_152f50;
        }
    }
    ctx->pc = 0x152A88u;
label_152a88:
    { static uint32_t n=0; ++n; if (n<=5||(n%100)==0) fprintf(stderr,"[t3 busy_warn1] n=%u v0=0x%x\n",n,GPR_U32(ctx,2)); }
    // 0x152a88: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x152a88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x152a8c: 0xc0499ee  jal         func_1267B8
    ctx->pc = 0x152A8Cu;
    SET_GPR_U32(ctx, 31, 0x152A94u);
    ctx->pc = 0x152A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152A8Cu;
    // 0x152a90: 0x24844f50  addiu       $a0, $a0, 0x4F50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1267B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1267B8u, 0x152A8Cu, 0x152A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152A94u;
label_152a94:
    // 0x152a94: 0xc054628  jal         func_1518A0
    ctx->pc = 0x152A94u;
    SET_GPR_U32(ctx, 31, 0x152A9Cu);
    ctx->pc = 0x152A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152A94u;
    // 0x152a98: 0x24042710  addiu       $a0, $zero, 0x2710 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1518A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1518A0u, 0x152A94u, 0x152A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152A9Cu;
label_152a9c:
    // 0x152a9c: 0x0  nop
    ctx->pc = 0x152a9cu;
    // NOP
label_152aa0:
    { static uint32_t n=0; ++n; if (n<=5||(n%100)==0) fprintf(stderr,"[t3 rpc_path] n=%u v0=0x%x\n",n,GPR_U32(ctx,2)); }
    // 0x152aa0: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x152aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x152aa4: 0xc04484a  jal         func_112128
    ctx->pc = 0x152AA4u;
    SET_GPR_U32(ctx, 31, 0x152AACu);
    ctx->pc = 0x152AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152AA4u;
    // 0x152aa8: 0x24847150  addiu       $a0, $a0, 0x7150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112128u, 0x152AA4u, 0x152AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152AACu;
label_152aac:
    // 0x152aac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x152aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x152ab0: 0x1043fff5  beq         $v0, $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x152AB0u;
    {
        const bool branch_taken_0x152ab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x152AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152AB0u;
        // 0x152ab4: 0x3c04007e  lui         $a0, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152ab0) {
            ctx->pc = 0x152A88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_152a88;
        }
    }
    ctx->pc = 0x152AB8u;
    // 0x152ab8: 0xc04484a  jal         func_112128
    ctx->pc = 0x152AB8u;
    SET_GPR_U32(ctx, 31, 0x152AC0u);
    ctx->pc = 0x152ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152AB8u;
    // 0x152abc: 0x24847180  addiu       $a0, $a0, 0x7180 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112128u, 0x152AB8u, 0x152AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152AC0u;
label_152ac0:
    // 0x152ac0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x152ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x152ac4: 0x1443000e  bne         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x152AC4u;
    {
        const bool branch_taken_0x152ac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x152ac4) {
            ctx->pc = 0x152B00u;
            goto label_152b00;
        }
    }
    ctx->pc = 0x152ACCu;
    // 0x152acc: 0x0  nop
    ctx->pc = 0x152accu;
    // NOP
label_152ad0:
    { static uint32_t n=0; ++n; if (n<=5||(n%100)==0) fprintf(stderr,"[t3 busy_warn2] n=%u v0=0x%x\n",n,GPR_U32(ctx,2)); }
    // 0x152ad0: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x152ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x152ad4: 0xc0499ee  jal         func_1267B8
    ctx->pc = 0x152AD4u;
    SET_GPR_U32(ctx, 31, 0x152ADCu);
    ctx->pc = 0x152AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152AD4u;
    // 0x152ad8: 0x24844d40  addiu       $a0, $a0, 0x4D40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1267B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1267B8u, 0x152AD4u, 0x152ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152ADCu;
label_152adc:
    // 0x152adc: 0xc054628  jal         func_1518A0
    ctx->pc = 0x152ADCu;
    SET_GPR_U32(ctx, 31, 0x152AE4u);
    ctx->pc = 0x152AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152ADCu;
    // 0x152ae0: 0x24042710  addiu       $a0, $zero, 0x2710 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1518A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1518A0u, 0x152ADCu, 0x152AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152AE4u;
label_152ae4:
    // 0x152ae4: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x152ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x152ae8: 0xc04484a  jal         func_112128
    ctx->pc = 0x152AE8u;
    SET_GPR_U32(ctx, 31, 0x152AF0u);
    ctx->pc = 0x152AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152AE8u;
    // 0x152aec: 0x24847180  addiu       $a0, $a0, 0x7180 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112128u, 0x152AE8u, 0x152AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152AF0u;
label_152af0:
    // 0x152af0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x152af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x152af4: 0x1043fff6  beq         $v0, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x152AF4u;
    {
        const bool branch_taken_0x152af4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x152af4) {
            ctx->pc = 0x152AD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_152ad0;
        }
    }
    ctx->pc = 0x152AFCu;
    // 0x152afc: 0x0  nop
    ctx->pc = 0x152afcu;
    // NOP
label_152b00:
    // 0x152b00: 0x83878578  lb          $a3, -0x7A88($gp)
    ctx->pc = 0x152b00u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935928)));
    // 0x152b04: 0x3c05007e  lui         $a1, 0x7E
    ctx->pc = 0x152b04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)126 << 16));
    // 0x152b08: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x152b08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x152b0c: 0x24a571b0  addiu       $a1, $a1, 0x71B0
    ctx->pc = 0x152b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29104));
    // 0x152b10: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x152b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x152b14: 0x24847230  addiu       $a0, $a0, 0x7230
    ctx->pc = 0x152b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29232));
    // 0x152b18: 0x3c030011  lui         $v1, 0x11
    ctx->pc = 0x152b18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17 << 16));
    // 0x152b1c: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x152b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x152b20: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x152b20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x152b24: 0x8cb10000  lw          $s1, 0x0($a1)
    ctx->pc = 0x152b24u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x152b28: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x152b28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x152b2c: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x152b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x152b30: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x152b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x152b34: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x152b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x152b38: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x152b38u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x152b3c: 0x104300bc  beq         $v0, $v1, . + 4 + (0xBC << 2)
    ctx->pc = 0x152B3Cu;
    {
        const bool branch_taken_0x152b3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x152B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152B3Cu;
        // 0x152b40: 0x858021  addu        $s0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152b3c) {
            ctx->pc = 0x152E30u;
            goto label_152e30;
        }
    }
    ctx->pc = 0x152B44u;
    // 0x152b44: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x152b44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x152b48: 0x104300a1  beq         $v0, $v1, . + 4 + (0xA1 << 2)
    ctx->pc = 0x152B48u;
    {
        const bool branch_taken_0x152b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x152B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152B48u;
        // 0x152b4c: 0x3c030030  lui         $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152b48) {
            ctx->pc = 0x152DD0u;
            goto label_152dd0;
        }
    }
    ctx->pc = 0x152B50u;
    // 0x152b50: 0x10430083  beq         $v0, $v1, . + 4 + (0x83 << 2)
    ctx->pc = 0x152B50u;
    {
        const bool branch_taken_0x152b50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x152b50) {
            ctx->pc = 0x152D60u;
            goto label_152d60;
        }
    }
    ctx->pc = 0x152B58u;
    // 0x152b58: 0x3c030031  lui         $v1, 0x31
    ctx->pc = 0x152b58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49 << 16));
    // 0x152b5c: 0x10430072  beq         $v0, $v1, . + 4 + (0x72 << 2)
    ctx->pc = 0x152B5Cu;
    {
        const bool branch_taken_0x152b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x152B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152B5Cu;
        // 0x152b60: 0x3c03002e  lui         $v1, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)46 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152b5c) {
            ctx->pc = 0x152D28u;
            goto label_152d28;
        }
    }
    ctx->pc = 0x152B64u;
    // 0x152b64: 0x10430070  beq         $v0, $v1, . + 4 + (0x70 << 2)
    ctx->pc = 0x152B64u;
    {
        const bool branch_taken_0x152b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x152b64) {
            ctx->pc = 0x152D28u;
            goto label_152d28;
        }
    }
    ctx->pc = 0x152B6Cu;
    // 0x152b6c: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x152b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x152b70: 0x1043006d  beq         $v0, $v1, . + 4 + (0x6D << 2)
    ctx->pc = 0x152B70u;
    {
        const bool branch_taken_0x152b70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x152B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152B70u;
        // 0x152b74: 0x3c03002a  lui         $v1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152b70) {
            ctx->pc = 0x152D28u;
            goto label_152d28;
        }
    }
    ctx->pc = 0x152B78u;
    // 0x152b78: 0x1043006b  beq         $v0, $v1, . + 4 + (0x6B << 2)
    ctx->pc = 0x152B78u;
    {
        const bool branch_taken_0x152b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x152b78) {
            ctx->pc = 0x152D28u;
            goto label_152d28;
        }
    }
    ctx->pc = 0x152B80u;
    // 0x152b80: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x152b80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
    // 0x152b84: 0x10430068  beq         $v0, $v1, . + 4 + (0x68 << 2)
    ctx->pc = 0x152B84u;
    {
        const bool branch_taken_0x152b84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x152B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152B84u;
        // 0x152b88: 0x3c030028  lui         $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152b84) {
            ctx->pc = 0x152D28u;
            goto label_152d28;
        }
    }
    ctx->pc = 0x152B8Cu;
    // 0x152b8c: 0x10430066  beq         $v0, $v1, . + 4 + (0x66 << 2)
    ctx->pc = 0x152B8Cu;
    {
        const bool branch_taken_0x152b8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x152b8c) {
            ctx->pc = 0x152D28u;
            goto label_152d28;
        }
    }
    ctx->pc = 0x152B94u;
    // 0x152b94: 0x10400064  beqz        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x152B94u;
    {
        const bool branch_taken_0x152b94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x152B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152B94u;
        // 0x152b98: 0x3c03002d  lui         $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152b94) {
            ctx->pc = 0x152D28u;
            goto label_152d28;
        }
    }
    ctx->pc = 0x152B9Cu;
    // 0x152b9c: 0x10430054  beq         $v0, $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x152B9Cu;
    {
        const bool branch_taken_0x152b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x152b9c) {
            ctx->pc = 0x152CF0u;
            goto label_152cf0;
        }
    }
    ctx->pc = 0x152BA4u;
    // 0x152ba4: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x152ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
    // 0x152ba8: 0x10430051  beq         $v0, $v1, . + 4 + (0x51 << 2)
    ctx->pc = 0x152BA8u;
    {
        const bool branch_taken_0x152ba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x152BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152BA8u;
        // 0x152bac: 0x3c030026  lui         $v1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152ba8) {
            ctx->pc = 0x152CF0u;
            goto label_152cf0;
        }
    }
    ctx->pc = 0x152BB0u;
    // 0x152bb0: 0x1043004f  beq         $v0, $v1, . + 4 + (0x4F << 2)
    ctx->pc = 0x152BB0u;
    {
        const bool branch_taken_0x152bb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x152bb0) {
            ctx->pc = 0x152CF0u;
            goto label_152cf0;
        }
    }
    ctx->pc = 0x152BB8u;
    // 0x152bb8: 0x3c03000a  lui         $v1, 0xA
    ctx->pc = 0x152bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10 << 16));
    // 0x152bbc: 0x1043003e  beq         $v0, $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x152BBCu;
    {
        const bool branch_taken_0x152bbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x152BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152BBCu;
        // 0x152bc0: 0x3c030009  lui         $v1, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152bbc) {
            ctx->pc = 0x152CB8u;
            goto label_152cb8;
        }
    }
    ctx->pc = 0x152BC4u;
    // 0x152bc4: 0x1043003c  beq         $v0, $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x152BC4u;
    {
        const bool branch_taken_0x152bc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x152bc4) {
            ctx->pc = 0x152CB8u;
            goto label_152cb8;
        }
    }
    ctx->pc = 0x152BCCu;
    // 0x152bcc: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x152bccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x152bd0: 0x1043002b  beq         $v0, $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x152BD0u;
    {
        const bool branch_taken_0x152bd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x152BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152BD0u;
        // 0x152bd4: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152bd0) {
            ctx->pc = 0x152C80u;
            goto label_152c80;
        }
    }
    ctx->pc = 0x152BD8u;
    // 0x152bd8: 0x10430029  beq         $v0, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x152BD8u;
    {
        const bool branch_taken_0x152bd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x152bd8) {
            ctx->pc = 0x152C80u;
            goto label_152c80;
        }
    }
    ctx->pc = 0x152BE0u;
    // 0x152be0: 0x3c030012  lui         $v1, 0x12
    ctx->pc = 0x152be0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18 << 16));
    // 0x152be4: 0x10430026  beq         $v0, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x152BE4u;
    {
        const bool branch_taken_0x152be4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x152BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152BE4u;
        // 0x152be8: 0x3c03002b  lui         $v1, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152be4) {
            ctx->pc = 0x152C80u;
            goto label_152c80;
        }
    }
    ctx->pc = 0x152BECu;
    // 0x152bec: 0x10430024  beq         $v0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x152BECu;
    {
        const bool branch_taken_0x152bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x152bec) {
            ctx->pc = 0x152C80u;
            goto label_152c80;
        }
    }
    ctx->pc = 0x152BF4u;
    // 0x152bf4: 0x3c030013  lui         $v1, 0x13
    ctx->pc = 0x152bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19 << 16));
    // 0x152bf8: 0x10430013  beq         $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x152BF8u;
    {
        const bool branch_taken_0x152bf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x152BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152BF8u;
        // 0x152bfc: 0x3c030005  lui         $v1, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152bf8) {
            ctx->pc = 0x152C48u;
            goto label_152c48;
        }
    }
    ctx->pc = 0x152C00u;
    // 0x152c00: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x152C00u;
    {
        const bool branch_taken_0x152c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x152c00) {
            ctx->pc = 0x152C10u;
            goto label_152c10;
        }
    }
    ctx->pc = 0x152C08u;
    // 0x152c08: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x152C08u;
    {
        const bool branch_taken_0x152c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152c08) {
            ctx->pc = 0x152D98u;
            goto label_152d98;
        }
    }
    ctx->pc = 0x152C10u;
label_152c10:
    // 0x152c10: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x152c10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x152c14: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x152c14u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x152c18: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x152c18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152c1c: 0x24847150  addiu       $a0, $a0, 0x7150
    ctx->pc = 0x152c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29008));
    // 0x152c20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x152c20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152c24: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x152c24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152c28: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x152c28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152c2c: 0x25290b00  addiu       $t1, $t1, 0xB00
    ctx->pc = 0x152c2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2816));
    // 0x152c30: 0x240a0320  addiu       $t2, $zero, 0x320
    ctx->pc = 0x152c30u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 800));
    // 0x152c34: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x152c34u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152c38: 0xc0447ca  jal         func_111F28
    ctx->pc = 0x152C38u;
    SET_GPR_U32(ctx, 31, 0x152C40u);
    ctx->pc = 0x152C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152C38u;
    // 0x152c3c: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111F28u, 0x152C38u, 0x152C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152C40u;
label_152c40:
    // 0x152c40: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x152C40u;
    {
        const bool branch_taken_0x152c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152c40) {
            ctx->pc = 0x152E88u;
            goto label_152e88;
        }
    }
    ctx->pc = 0x152C48u;
label_152c48:
    // 0x152c48: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x152c48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x152c4c: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x152c4cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x152c50: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x152c50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152c54: 0x24847150  addiu       $a0, $a0, 0x7150
    ctx->pc = 0x152c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29008));
    // 0x152c58: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x152c58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152c5c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x152c5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152c60: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x152c60u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152c64: 0x25290b00  addiu       $t1, $t1, 0xB00
    ctx->pc = 0x152c64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2816));
    // 0x152c68: 0x240a001c  addiu       $t2, $zero, 0x1C
    ctx->pc = 0x152c68u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x152c6c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x152c6cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152c70: 0xc0447ca  jal         func_111F28
    ctx->pc = 0x152C70u;
    SET_GPR_U32(ctx, 31, 0x152C78u);
    ctx->pc = 0x152C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152C70u;
    // 0x152c74: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111F28u, 0x152C70u, 0x152C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152C78u;
label_152c78:
    // 0x152c78: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x152C78u;
    {
        const bool branch_taken_0x152c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152c78) {
            ctx->pc = 0x152E88u;
            goto label_152e88;
        }
    }
    ctx->pc = 0x152C80u;
label_152c80:
    // 0x152c80: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x152c80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x152c84: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x152c84u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x152c88: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x152c88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152c8c: 0x24847150  addiu       $a0, $a0, 0x7150
    ctx->pc = 0x152c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29008));
    // 0x152c90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x152c90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152c94: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x152c94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152c98: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x152c98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152c9c: 0x25290b00  addiu       $t1, $t1, 0xB00
    ctx->pc = 0x152c9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2816));
    // 0x152ca0: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x152ca0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x152ca4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x152ca4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152ca8: 0xc0447ca  jal         func_111F28
    ctx->pc = 0x152CA8u;
    SET_GPR_U32(ctx, 31, 0x152CB0u);
    ctx->pc = 0x152CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152CA8u;
    // 0x152cac: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111F28u, 0x152CA8u, 0x152CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152CB0u;
label_152cb0:
    // 0x152cb0: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x152CB0u;
    {
        const bool branch_taken_0x152cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152cb0) {
            ctx->pc = 0x152E88u;
            goto label_152e88;
        }
    }
    ctx->pc = 0x152CB8u;
label_152cb8:
    // 0x152cb8: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x152cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x152cbc: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x152cbcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x152cc0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x152cc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152cc4: 0x24847150  addiu       $a0, $a0, 0x7150
    ctx->pc = 0x152cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29008));
    // 0x152cc8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x152cc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152ccc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x152cccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152cd0: 0x24080320  addiu       $t0, $zero, 0x320
    ctx->pc = 0x152cd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 800));
    // 0x152cd4: 0x25290b00  addiu       $t1, $t1, 0xB00
    ctx->pc = 0x152cd4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2816));
    // 0x152cd8: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x152cd8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x152cdc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x152cdcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152ce0: 0xc0447ca  jal         func_111F28
    ctx->pc = 0x152CE0u;
    SET_GPR_U32(ctx, 31, 0x152CE8u);
    ctx->pc = 0x152CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152CE0u;
    // 0x152ce4: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111F28u, 0x152CE0u, 0x152CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152CE8u;
label_152ce8:
    // 0x152ce8: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x152CE8u;
    {
        const bool branch_taken_0x152ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152ce8) {
            ctx->pc = 0x152E88u;
            goto label_152e88;
        }
    }
    ctx->pc = 0x152CF0u;
label_152cf0:
    // 0x152cf0: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x152cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x152cf4: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x152cf4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x152cf8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x152cf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152cfc: 0x24847150  addiu       $a0, $a0, 0x7150
    ctx->pc = 0x152cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29008));
    // 0x152d00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x152d00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152d04: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x152d04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152d08: 0x24080320  addiu       $t0, $zero, 0x320
    ctx->pc = 0x152d08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 800));
    // 0x152d0c: 0x25290b00  addiu       $t1, $t1, 0xB00
    ctx->pc = 0x152d0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2816));
    // 0x152d10: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x152d10u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x152d14: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x152d14u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152d18: 0xc0447ca  jal         func_111F28
    ctx->pc = 0x152D18u;
    SET_GPR_U32(ctx, 31, 0x152D20u);
    ctx->pc = 0x152D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152D18u;
    // 0x152d1c: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111F28u, 0x152D18u, 0x152D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152D20u;
label_152d20:
    // 0x152d20: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x152D20u;
    {
        const bool branch_taken_0x152d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152d20) {
            ctx->pc = 0x152E88u;
            goto label_152e88;
        }
    }
    ctx->pc = 0x152D28u;
label_152d28:
    // 0x152d28: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x152d28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x152d2c: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x152d2cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x152d30: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x152d30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152d34: 0x24847150  addiu       $a0, $a0, 0x7150
    ctx->pc = 0x152d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29008));
    // 0x152d38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x152d38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152d3c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x152d3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152d40: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x152d40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152d44: 0x25290b00  addiu       $t1, $t1, 0xB00
    ctx->pc = 0x152d44u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2816));
    // 0x152d48: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x152d48u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x152d4c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x152d4cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152d50: 0xc0447ca  jal         func_111F28
    ctx->pc = 0x152D50u;
    SET_GPR_U32(ctx, 31, 0x152D58u);
    ctx->pc = 0x152D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152D50u;
    // 0x152d54: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111F28u, 0x152D50u, 0x152D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152D58u;
label_152d58:
    // 0x152d58: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x152D58u;
    {
        const bool branch_taken_0x152d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152d58) {
            ctx->pc = 0x152E88u;
            goto label_152e88;
        }
    }
    ctx->pc = 0x152D60u;
label_152d60:
    // 0x152d60: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x152d60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x152d64: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x152d64u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x152d68: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x152d68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152d6c: 0x24847150  addiu       $a0, $a0, 0x7150
    ctx->pc = 0x152d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29008));
    // 0x152d70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x152d70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152d74: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x152d74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152d78: 0x24080320  addiu       $t0, $zero, 0x320
    ctx->pc = 0x152d78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 800));
    // 0x152d7c: 0x25290b00  addiu       $t1, $t1, 0xB00
    ctx->pc = 0x152d7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2816));
    // 0x152d80: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x152d80u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x152d84: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x152d84u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152d88: 0xc0447ca  jal         func_111F28
    ctx->pc = 0x152D88u;
    SET_GPR_U32(ctx, 31, 0x152D90u);
    ctx->pc = 0x152D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152D88u;
    // 0x152d8c: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111F28u, 0x152D88u, 0x152D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152D90u;
label_152d90:
    // 0x152d90: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x152D90u;
    {
        const bool branch_taken_0x152d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152d90) {
            ctx->pc = 0x152E88u;
            goto label_152e88;
        }
    }
    ctx->pc = 0x152D98u;
label_152d98:
    // 0x152d98: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x152d98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x152d9c: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x152d9cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x152da0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x152da0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152da4: 0x24847150  addiu       $a0, $a0, 0x7150
    ctx->pc = 0x152da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29008));
    // 0x152da8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x152da8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152dac: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x152dacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152db0: 0x24080320  addiu       $t0, $zero, 0x320
    ctx->pc = 0x152db0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 800));
    // 0x152db4: 0x25290b00  addiu       $t1, $t1, 0xB00
    ctx->pc = 0x152db4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2816));
    // 0x152db8: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x152db8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x152dbc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x152dbcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152dc0: 0xc0447ca  jal         func_111F28
    ctx->pc = 0x152DC0u;
    SET_GPR_U32(ctx, 31, 0x152DC8u);
    ctx->pc = 0x152DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152DC0u;
    // 0x152dc4: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111F28u, 0x152DC0u, 0x152DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152DC8u;
label_152dc8:
    // 0x152dc8: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x152DC8u;
    {
        const bool branch_taken_0x152dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152dc8) {
            ctx->pc = 0x152E88u;
            goto label_152e88;
        }
    }
    ctx->pc = 0x152DD0u;
label_152dd0:
    // 0x152dd0: 0xc054990  jal         func_152640
    ctx->pc = 0x152DD0u;
    SET_GPR_U32(ctx, 31, 0x152DD8u);
    ctx->pc = 0x152640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152640u, 0x152DD0u, 0x152DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152DD8u;
label_152dd8:
    // 0x152dd8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x152dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x152ddc: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x152ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x152de0: 0x24632660  addiu       $v1, $v1, 0x2660
    ctx->pc = 0x152de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9824));
    // 0x152de4: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x152de4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x152de8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x152de8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x152dec: 0xc054990  jal         func_152640
    ctx->pc = 0x152DECu;
    SET_GPR_U32(ctx, 31, 0x152DF4u);
    ctx->pc = 0x152DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152DECu;
    // 0x152df0: 0xaf8385a8  sw          $v1, -0x7A58($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935976), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152640u, 0x152DECu, 0x152DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152DF4u;
label_152df4:
    // 0x152df4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x152df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x152df8: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x152df8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x152dfc: 0x8f8b85a8  lw          $t3, -0x7A58($gp)
    ctx->pc = 0x152dfcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935976)));
    // 0x152e00: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x152e00u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x152e04: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x152e04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152e08: 0x24847180  addiu       $a0, $a0, 0x7180
    ctx->pc = 0x152e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29056));
    // 0x152e0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x152e0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152e10: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x152e10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152e14: 0x24080320  addiu       $t0, $zero, 0x320
    ctx->pc = 0x152e14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 800));
    // 0x152e18: 0x25290e40  addiu       $t1, $t1, 0xE40
    ctx->pc = 0x152e18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3648));
    // 0x152e1c: 0xc0447ca  jal         func_111F28
    ctx->pc = 0x152E1Cu;
    SET_GPR_U32(ctx, 31, 0x152E24u);
    ctx->pc = 0x152E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152E1Cu;
    // 0x152e20: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111F28u, 0x152E1Cu, 0x152E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152E24u;
label_152e24:
    // 0x152e24: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x152E24u;
    {
        const bool branch_taken_0x152e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152e24) {
            ctx->pc = 0x152E88u;
            goto label_152e88;
        }
    }
    ctx->pc = 0x152E2Cu;
    // 0x152e2c: 0x0  nop
    ctx->pc = 0x152e2cu;
    // NOP
label_152e30:
    // 0x152e30: 0xc054990  jal         func_152640
    ctx->pc = 0x152E30u;
    SET_GPR_U32(ctx, 31, 0x152E38u);
    ctx->pc = 0x152640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152640u, 0x152E30u, 0x152E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152E38u;
label_152e38:
    // 0x152e38: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x152e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x152e3c: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x152e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x152e40: 0x24632680  addiu       $v1, $v1, 0x2680
    ctx->pc = 0x152e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9856));
    // 0x152e44: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x152e44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x152e48: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x152e48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x152e4c: 0xc054990  jal         func_152640
    ctx->pc = 0x152E4Cu;
    SET_GPR_U32(ctx, 31, 0x152E54u);
    ctx->pc = 0x152E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152E4Cu;
    // 0x152e50: 0xaf8385ac  sw          $v1, -0x7A54($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935980), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152640u, 0x152E4Cu, 0x152E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152E54u;
label_152e54:
    // 0x152e54: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x152e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x152e58: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x152e58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x152e5c: 0x8f8b85ac  lw          $t3, -0x7A54($gp)
    ctx->pc = 0x152e5cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935980)));
    // 0x152e60: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x152e60u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x152e64: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x152e64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152e68: 0x24847180  addiu       $a0, $a0, 0x7180
    ctx->pc = 0x152e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29056));
    // 0x152e6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x152e6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152e70: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x152e70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152e74: 0x24080320  addiu       $t0, $zero, 0x320
    ctx->pc = 0x152e74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 800));
    // 0x152e78: 0x25290e40  addiu       $t1, $t1, 0xE40
    ctx->pc = 0x152e78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3648));
    // 0x152e7c: 0xc0447ca  jal         func_111F28
    ctx->pc = 0x152E7Cu;
    SET_GPR_U32(ctx, 31, 0x152E84u);
    ctx->pc = 0x152E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152E7Cu;
    // 0x152e80: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111F28u, 0x152E7Cu, 0x152E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152E84u;
label_152e84:
    // 0x152e84: 0x0  nop
    ctx->pc = 0x152e84u;
    // NOP
label_152e88:
    // 0x152e88: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x152E88u;
    {
        const bool branch_taken_0x152e88 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x152E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152E88u;
        // 0x152e8c: 0x3c040066  lui         $a0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152e88) {
            ctx->pc = 0x152EA0u;
            goto label_152ea0;
        }
    }
    ctx->pc = 0x152E90u;
    // 0x152e90: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x152e90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152e94: 0xc0499ee  jal         func_1267B8
    ctx->pc = 0x152E94u;
    SET_GPR_U32(ctx, 31, 0x152E9Cu);
    ctx->pc = 0x152E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152E94u;
    // 0x152e98: 0x24844fb0  addiu       $a0, $a0, 0x4FB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1267B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1267B8u, 0x152E94u, 0x152E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152E9Cu;
label_152e9c:
    // 0x152e9c: 0x0  nop
    ctx->pc = 0x152e9cu;
    // NOP
label_152ea0:
    // 0x152ea0: 0x83848578  lb          $a0, -0x7A88($gp)
    ctx->pc = 0x152ea0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935928)));
    // 0x152ea4: 0x3c02007e  lui         $v0, 0x7E
    ctx->pc = 0x152ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)126 << 16));
    // 0x152ea8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x152ea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152eac: 0x24427230  addiu       $v0, $v0, 0x7230
    ctx->pc = 0x152eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29232));
    // 0x152eb0: 0x24060320  addiu       $a2, $zero, 0x320
    ctx->pc = 0x152eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 800));
    // 0x152eb4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x152eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x152eb8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x152eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x152ebc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x152ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x152ec0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x152ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x152ec4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x152ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x152ec8: 0xc049590  jal         func_125640
    ctx->pc = 0x152EC8u;
    SET_GPR_U32(ctx, 31, 0x152ED0u);
    ctx->pc = 0x152ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152EC8u;
    // 0x152ecc: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x152EC8u, 0x152ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152ED0u;
label_152ed0:
    // 0x152ed0: 0x83838578  lb          $v1, -0x7A88($gp)
    ctx->pc = 0x152ed0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935928)));
    // 0x152ed4: 0x3c02007e  lui         $v0, 0x7E
    ctx->pc = 0x152ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)126 << 16));
    // 0x152ed8: 0x244271b0  addiu       $v0, $v0, 0x71B0
    ctx->pc = 0x152ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29104));
    // 0x152edc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x152edcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x152ee0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x152ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x152ee4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x152ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x152ee8: 0x83828578  lb          $v0, -0x7A88($gp)
    ctx->pc = 0x152ee8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935928)));
    // 0x152eec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x152eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x152ef0: 0xa3828578  sb          $v0, -0x7A88($gp)
    ctx->pc = 0x152ef0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935928), (uint8_t)GPR_U32(ctx, 2));
    // 0x152ef4: 0x83828578  lb          $v0, -0x7A88($gp)
    ctx->pc = 0x152ef4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935928)));
    // 0x152ef8: 0x28420020  slti        $v0, $v0, 0x20
    ctx->pc = 0x152ef8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x152efc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x152EFCu;
    {
        const bool branch_taken_0x152efc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x152efc) {
            ctx->pc = 0x152F08u;
            goto label_152f08;
        }
    }
    ctx->pc = 0x152F04u;
    // 0x152f04: 0xa3808578  sb          $zero, -0x7A88($gp)
    ctx->pc = 0x152f04u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935928), (uint8_t)GPR_U32(ctx, 0));
label_152f08:
    // 0x152f08: 0x83838574  lb          $v1, -0x7A8C($gp)
    ctx->pc = 0x152f08u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935924)));
    // 0x152f0c: 0x83828578  lb          $v0, -0x7A88($gp)
    ctx->pc = 0x152f0cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935928)));
    // 0x152f10: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x152F10u;
    {
        const bool branch_taken_0x152f10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x152F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152F10u;
        // 0x152f14: 0x3c04007e  lui         $a0, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152f10) {
            ctx->pc = 0x152F50u;
            goto label_152f50;
        }
    }
    ctx->pc = 0x152F18u;
    // 0x152f18: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x152f18u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x152f1c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x152f1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152f20: 0x24847150  addiu       $a0, $a0, 0x7150
    ctx->pc = 0x152f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29008));
    // 0x152f24: 0x3c0500ff  lui         $a1, 0xFF
    ctx->pc = 0x152f24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)255 << 16));
    // 0x152f28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x152f28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152f2c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x152f2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152f30: 0x25290b00  addiu       $t1, $t1, 0xB00
    ctx->pc = 0x152f30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2816));
    // 0x152f34: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x152f34u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x152f38: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x152f38u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152f3c: 0xc0447ca  jal         func_111F28
    ctx->pc = 0x152F3Cu;
    SET_GPR_U32(ctx, 31, 0x152F44u);
    ctx->pc = 0x152F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152F3Cu;
    // 0x152f40: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111F28u, 0x152F3Cu, 0x152F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152F44u;
label_152f44:
    // 0x152f44: 0xc043800  jal         func_10E000
    ctx->pc = 0x152F44u;
    SET_GPR_U32(ctx, 31, 0x152F4Cu);
    ctx->pc = 0x152F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152F44u;
    // 0x152f48: 0x8f84858c  lw          $a0, -0x7A74($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935948)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E000u, 0x152F44u, 0x152F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152F4Cu;
label_152f4c:
    // 0x152f4c: 0x0  nop
    ctx->pc = 0x152f4cu;
    // NOP
label_152f50:
    { static uint32_t n=0; ++n; if (n<=5||(n%100)==0) fprintf(stderr,"[t3 rpc_done] n=%u v0=0x%x\n",n,GPR_U32(ctx,2)); }
    // 0x152f50: 0x83838574  lb          $v1, -0x7A8C($gp)
    ctx->pc = 0x152f50u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935924)));
    // 0x152f54: 0x83828578  lb          $v0, -0x7A88($gp)
    ctx->pc = 0x152f54u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935928)));
    // 0x152f58: 0x1462fed1  bne         $v1, $v0, . + 4 + (-0x12F << 2)
    ctx->pc = 0x152F58u;
    {
        const bool branch_taken_0x152f58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x152f58) {
            ctx->pc = 0x152AA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_152aa0;
        }
    }
    ctx->pc = 0x152F60u;
    // 0x152f60: 0xc0437d4  jal         func_10DF50
    ctx->pc = 0x152F60u;
    SET_GPR_U32(ctx, 31, 0x152F68u);
    ctx->pc = 0x152F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152F60u;
    // 0x152f64: 0x8f848590  lw          $a0, -0x7A70($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DF50u, 0x152F60u, 0x152F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152F68u;
label_152f68:
    // 0x152f68: 0x1000feb9  b           . + 4 + (-0x147 << 2)
    ctx->pc = 0x152F68u;
    {
        const bool branch_taken_0x152f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152f68) {
            ctx->pc = 0x152A50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_152a50;
        }
    }
    ctx->pc = 0x152F70u;
}
